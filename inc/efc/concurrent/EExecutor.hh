/*
 * EExecutor.hh
 *
 *  Created on: 2013-8-19
 *      Author: cxxjava@163.com
 */

#ifndef EEXECUTOR_HH_
#define EEXECUTOR_HH_

#include "ERunnable.hh"
#include "ESharedPtr.hh"

namespace efc {

/**
 * An object that executes submitted {@link Runnable} tasks. This
 * interface provides a way of decoupling task submission from the
 * mechanics of how each task will be run, including details of thread
 * use, scheduling, etc.  An <tt>Executor</tt> is normally used
 * instead of explicitly creating threads. For example, rather than
 * invoking <tt>new Thread(new(RunnableTask())).start()</tt> for each
 * of a set of tasks, you might use:
 *
 * <pre>
 * Executor executor = <em>anExecutor</em>;
 * executor.execute(new RunnableTask1());
 * executor.execute(new RunnableTask2());
 * ...
 * </pre>
 *
 * However, the <tt>Executor</tt> interface does not strictly
 * require that execution be asynchronous. In the simplest case, an
 * executor can run the submitted task immediately in the caller's
 * thread:
 *
 * <pre>
 * class DirectExecutor implements Executor {
 *     public void execute(Runnable r) {
 *         r.run();
 *     }
 * }</pre>
 *
 * More typically, tasks are executed in some thread other
 * than the caller's thread.  The executor below spawns a new thread
 * for each task.
 *
 * <pre>
 * class ThreadPerTaskExecutor implements Executor {
 *     public void execute(Runnable r) {
 *         new Thread(r).start();
 *     }
 * }</pre>
 *
 * Many <tt>Executor</tt> implementations impose some sort of
 * limitation on how and when tasks are scheduled.  The executor below
 * serializes the submission of tasks to a second executor,
 * illustrating a composite executor.
 *
 * <pre>
 * class SerialExecutor implements Executor {
 *     final Queue&lt;Runnable&gt; tasks = new ArrayDeque&lt;Runnable&gt;();
 *     final Executor executor;
 *     Runnable active;
 *
 *     SerialExecutor(Executor executor) {
 *         this.executor = executor;
 *     }
 *
 *     public synchronized void execute(final Runnable r) {
 *         tasks.offer(new Runnable() {
 *             public void run() {
 *                 try {
 *                     r.run();
 *                 } finally {
 *                     scheduleNext();
 *                 }
 *             }
 *         });
 *         if (active == null) {
 *             scheduleNext();
 *         }
 *     }
 *
 *     protected synchronized void scheduleNext() {
 *         if ((active = tasks.poll()) != null) {
 *             executor.execute(active);
 *         }
 *     }
 * }</pre>
 *
 * The <tt>Executor</tt> implementations provided in this package
 * implement {@link ExecutorService}, which is a more extensive
 * interface.  The {@link ThreadPoolExecutor} class provides an
 * extensible thread pool implementation. The {@link Executors} class
 * provides convenient factory methods for these Executors.
 *
 * <p>Memory consistency effects: Actions in a thread prior to
 * submitting a {@code Runnable} object to an {@code Executor}
 * <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
 * its execution begins, perhaps in another thread.
 *
 * @since 1.5
 */

interface EExecutor : virtual public EObject {
	virtual ~EExecutor(){}

    /**
     * Executes the given command at some time in the future.  The command
     * may execute in a new thread, in a pooled thread, or in the calling
     * thread, at the discretion of the <tt>Executor</tt> implementation.
     *
     * @param command the runnable task
     * @throws RejectedExecutionException if this task cannot be
     * accepted for execution.
     * @throws NullPointerException if command is null
     */
    virtual void execute(sp<ERunnable> command) = 0;

#ifdef CPP11_SUPPORT
	virtual sp<ERunnable> executeX(std::function<void()> func) {
		sp<ERunnable> task = new ERunnableTarget(func);
		this->execute(task);
		return task;
	}
#endif
};

} /* namespace efc */
#endif /* EEXECUTOR_HH_ */
