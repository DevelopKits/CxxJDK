#ifndef __EFC_H__
#define __EFC_H__

#define EFC_VERSION "0.6.0"

#include "EBase.hh"

//efc
#include "EA.hh"
#include "EAbstractCollection.hh"
#include "EAbstractExecutorService.hh"
#include "EAbstractList.hh"
#include "EAbstractMap.hh"
#include "EAbstractOwnableSynchronizer.hh"
#include "EAbstractQueuedSynchronizer.hh"
#include "EAbstractSet.hh"
#include "EAlreadyConnectedException.hh"
#include "EArithmeticException.hh"
#include "EArray.hh"
#include "EArrayDeque.hh"
#include "EArrays.hh"
#include "EArrayList.hh"
#include "EAtomic.hh"
#include "EAtomicBoolean.hh"
#include "EAtomicCounter.hh"
#include "EAtomicDouble.hh"
#include "EAtomicInteger.hh"
#include "EAtomicLLong.hh"
#include "EAtomicReference.hh"
#include "EAuthenticationException.hh"
#include "EBase64.hh"
#include "EBigDecimal.hh"
#include "EBigInteger.hh"
#include "EBits.hh"
#include "EBitSet.hh"
#include "EBson.hh"
#include "EBsonParser.hh"
#include "EBoolean.hh"
#include "EBufferedInputStream.hh"
#include "EBufferedOutputStream.hh"
#include "EByte.hh"
#include "EByteArrayInputStream.hh"
#include "EByteArrayOutputStream.hh"
#include "EByteBuffer.hh"
#include "ECalendar.hh"
#include "ECallable.hh"
#include "ECancellationException.hh"
#include "ECharacter.hh"
#include "ECheckedInputStream.hh"
#include "EConcurrentHashMap.hh"
#include "EConcurrentIntrusiveDeque.hh"
#include "EConcurrentLinkedQueue.hh"
#include "EConcurrentLiteQueue.hh"
#include "EConcurrentSkipListMap.hh"
#include "EConnectException.hh"
#include "ECollection.hh"
#include "ECollections.hh"
#include "EComparable.hh"
#include "EComparator.hh"
#include "ECompletionService.hh"
#include "ECondition.hh"
#include "EConfig.hh"
#include "ECopyOnWriteArrayList.hh"
#include "ECountDownLatch.hh"
#include "ECRC32.hh"
#include "ECyclicBarrier.hh"
#include "EDataFormatException.hh"
#include "EDatagramPacket.hh"
#include "EDatagramSocket.hh"
#include "EDataInput.hh"
#include "EDataInputStream.hh"
#include "EDataOutput.hh"
#include "EDataOutputStream.hh"
#include "EDate.hh"
#include "EDeflater.hh"
#include "EDeflaterOutputStream.hh"
#include "EDeque.hh"
#include "EDictionary.hh"
#include "EDouble.hh"
#include "EEmptyStackException.hh"
#include "EEnumeration.hh"
#include "EEOFException.hh"
#include "EEventListener.hh"
#include "EEventListenerProxy.hh"
#include "EEventObject.hh"
#include "EException.hh"
#include "EExchanger.hh"
#include "EExecutionException.hh"
#include "EExecutor.hh"
#include "EExecutorCompletionService.hh"
#include "EExecutors.hh"
#include "EExecutorService.hh"
#include "EFile.hh"
#include "EFileInputStream.hh"
#include "EFileOutputStream.hh"
#include "EFilterOutputStream.hh"
#include "EFloat.hh"
#include "EFilenameFilter.hh"
#include "EFileNotFoundException.hh"
#include "EFork.hh"
#include "EFuture.hh"
#include "EHashMap.hh"
#include "EHashSet.hh"
#include "EIllegalArgumentException.hh"
#include "EIllegalStateException.hh"
#include "EIllegalThreadStateException.hh"
#include "EIndexOutOfBoundsException.hh"
#include "EInterfaceAddress.hh"
#include "EInterruptedIOException.hh"
#include "EInterruptible.hh"
#include "EGZIPInputStream.hh"
#include "EGZIPOutputStream.hh"
#include "EIdentityHashMap.hh"
#include "EIllegalBlockingModeException.hh"
#include "EInetAddress.hh"
#include "EInflater.hh"
#include "EInteger.hh"
#include "EInetSocketAddress.hh"
#include "EInflaterInputStream.hh"
#include "EInvalidMarkException.hh"
#include "EIOException.hh"
#include "EIOStatus.hh"
#include "EIPAddressUtil.hh"
#include "EIterable.hh"
#include "EIterator.hh"
#include "ELinkedBlockingQueue.hh"
#include "ELinkedTransferQueue.hh"
#include "ELinkedList.hh"
#include "EList.hh"
#include "ELLong.hh"
#include "ELock.hh"
#include "ELockSupport.hh"
#include "EMalformedURLException.hh"
#include "EMap.hh"
#include "EMatcher.hh"
#include "EMatchResult.hh"
#include "EMath.hh"
#include "EMathFP.hh"
#include "ENavigableMap.hh"
#include "ENavigableSet.hh"
#include "ENetWrapper.hh"
#include "ENetworkInterface.hh"
#include "ENoSuchElementException.hh"
#include "ENotYetBoundException.hh"
#include "ENotYetConnectedException.hh"
#include "ENumber.hh"
#include "EMulticastSocket.hh"
#include "ENumberFormatException.hh"
#include "EObject.hh"
#include "EObservable.hh"
#include "EObserver.hh"
#include "EOrderAccess.hh"
#include "EOS.hh"
#include "EOutOfMemoryError.hh"
#include "EPattern.hh"
#include "EPipedInputStream.hh"
#include "EPipedOutputStream.hh"
#include "EPortUnreachableException.hh"
#include "EPrintStream.hh"
#include "EPriorityQueue.hh"
#include "EProcess.hh"
#include "EQueue.hh"
#include "ERandom.hh"
#include "ERandomAccessFile.hh"
#include "EReadWriteLock.hh"
#include "EReentrantLock.hh"
#include "EReentrantReadWriteLock.hh"
#include "EReference.hh"
#include "ERunnable.hh"
#include "ERunnableFuture.hh"
#include "ERuntimeException.hh"
#include "ESaslException.hh"
#include "ESecureRandom.hh"
#include "ESemaphore.hh"
#include "ESentry.hh"
#include "ESet.hh"
#include "EShort.hh"
#include "ESimpleCondition.hh"
#include "ESimpleEnumeration.hh"
#include "ESimpleLock.hh"
#include "ESimpleMap.hh"
#include "ESimpleStack.hh"
#include "ESimpleVector.hh"
#include "ESequenceInputStream.hh"
#include "EServerSocket.hh"
#include "ESharedPtr.hh"
#include "ESocket.hh"
#include "ESocketException.hh"
#include "ESortedMap.hh"
#include "ESortedSet.hh"
#include "ESpinLock.hh"
#include "ESSLServerSocket.hh"
#include "ESSLSocket.hh"
#include "EStack.hh"
#include "EStream.hh"
#include "EString.hh"
#include "EStringBase.hh"
#include "EStringTokenizer.hh"
#include "ESynchronizeable.hh"
#include "ESynchronousQueue.hh"
#include "ESystem.hh"
#include "EThread.hh"
#include "EThreadLocal.hh"
#include "EThreadLocalRandom.hh"
#include "EThreadLocalStorage.hh"
#include "EThreadPoolExecutor.hh"
#include "EThrowable.hh"
#include "ETimeoutException.hh"
#include "ETimer.hh"
#include "ETimerTask.hh"
#include "ETimeUnit.hh"
#include "EToDoException.hh"
#include "ETraits.hh"
#include "ETreeMap.hh"
#include "ETreeSet.hh"
#include "EUnknownHostException.hh"
#include "EUnknownServiceException.hh"
#include "EUnresolvedAddressException.hh"
#include "EUnsafe.hh"
#include "EUnsupportedAddressTypeException.hh"
#include "EUnsupportedEncodingException.hh"
#include "EUnsupportedOperationException.hh"
#include "EURI.hh"
#include "EURISyntaxException.hh"
#include "EURLDecoder.hh"
#include "EURLEncoder.hh"
#include "EURLString.hh"
#include "EVector.hh"

//efc::nio
#include "EAsynchronousCloseException.hh"
#include "EBufferOverflowException.hh"
#include "EBufferUnderflowException.hh"
#include "EByteChannel.hh"
#include "ECancelledKeyException.hh"
#include "EChannel.hh"
#include "EChannelInputStream.hh"
#include "EClosedChannelException.hh"
#include "EClosedSelectorException.hh"
#include "EConnectionPendingException.hh"
#include "EDatagramChannel.hh"
#include "EFileChannel.hh"
#include "EFileLock.hh"
#include "EIOByteBuffer.hh"
#include "EMappedByteBuffer.hh"
#include "EMembershipKey.hh"
#include "EMulticastChannel.hh"
#include "ENativeThreadSet.hh"
#include "ENoConnectionPendingException.hh"
#include "ENonReadableChannelException.hh"
#include "ENonWritableChannelException.hh"
#include "EOverlappingFileLockException.hh"
#include "EReadOnlyBufferException.hh"
#include "ESelectableChannel.hh"
#include "ESelectionKey.hh"
#include "ESelector.hh"
#include "EServerSocketChannel.hh"
#include "ESocketChannel.hh"

//efc::cpp11
#include "EScopeGuard.hh"

using namespace efc;
using namespace efc::nio;

#endif // !__EFC_H
