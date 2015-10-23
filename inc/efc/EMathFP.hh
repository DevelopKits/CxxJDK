#ifndef __EMathFP_H__
#define __EMathFP_H__

#include "EObject.hh"

namespace efc {

//data type of MathFP int
typedef int intFP;

class EMathFP : public EObject
{
public:

static const intFP PI;// = 12868;
static const intFP E;// = 11134;
static const intFP MAX_VALUE;// = 0x7fffffff;
static const intFP MIN_VALUE;// = 0x80000001;
static const intFP ZERO;// = 0;

static const intFP ONE;// = (1 << 12);
static const intFP HALF;// = (EMathFP::ONE >> 1);
static const intFP TWO;// = (EMathFP::ONE << 1);

static intFP toFP(int i);
static intFP toFP(int i, int f);
static intFP toFP(const char *s);

static int toInt(intFP i);

static intFP add(intFP i, intFP j); //'+'
static intFP sub(intFP i, intFP j); //'-'
static intFP mul(intFP i, intFP j); //'*'
static intFP div(intFP i, intFP j); //'/'

static intFP max(intFP i, intFP j); //max
static intFP min(intFP i, intFP j); //min

static intFP abs(intFP i); //ȡ����ֵ
static intFP round(intFP i, int j=0); //��һ��ʵ�������������룬j��ʾ����С��λ��
static intFP trunc(intFP i); //��ȡһ��ʵ������������
static intFP floor(intFP i); //����С��ָ�������������
static intFP ceil(intFP i); //�������ָ��������С����
static intFP frac(intFP i); //����һ��ʵ����С�����֣�����ֵ�Ŵ���1000��

static intFP sin(intFP i); //���Ҽ��㣬��λ�ǻ���
static intFP cos(intFP i); //���Ҽ��㣬��λ�ǻ���
static intFP cot(intFP i); //���м��㣬��λ�ǻ���
static intFP tan(intFP i); //���м��㣬��λ�ǻ���
static intFP asin(intFP e); //ȡ�÷�����ֵ����λ�ǻ���
static intFP acos(intFP e); //ȡ�÷�����ֵ����λ�ǻ���

static intFP exp(intFP i); //��Ȼ����e�Ĵη�ֵ
static intFP log(intFP i); //������Ĭ�ϵ���Ϊ10
static intFP pow(intFP i, int j=2); //������
static intFP sqrt(intFP i); //������

static intFP toDeg(intFP a); //����->�Ƕ�
static intFP toRad(intFP a); //�Ƕ�->����

private:
static int pow_int(int i, int j);
static int sqrt_byte(int i, int j);
};

} /* namespace efc */
#endif //!__EMathFP_H__
