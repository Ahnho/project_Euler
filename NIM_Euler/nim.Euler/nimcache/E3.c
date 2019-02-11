/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2 -Wp,-D_GLIBCXX_ASSERTIONS -fexceptions -fstack-protector-strong -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -specs=/usr/lib/rpm/redhat/redhat-annobin-cc1 -m64 -mtune=generic -fasynchronous-unwind-tables -fstack-clash-protection -fcf-protection  -I/usr/share/nim -o /home/sangho/Documents/Euler/NIM_Euler/nim.Euler/nimcache/E3.o /home/sangho/Documents/Euler/NIM_Euler/nim.Euler/nimcache/E3.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tySequence_IHUFRsFxZNv7YydiUO2esQ tySequence_IHUFRsFxZNv7YydiUO2esQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
struct tySequence_IHUFRsFxZNv7YydiUO2esQ {
  TGenericSeq Sup;
  NI64 data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, is_primes_eBF9b3LdrNBWjsNiHf9alk5w)(NI x);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, modInt)(NI a, NI b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tySequence_IHUFRsFxZNv7YydiUO2esQ*, primes_bv59ahigN5q9cPDT2ZuYyJhg)(NI64 n);
static N_NIMCALL(void, Marker_tySequence_IHUFRsFxZNv7YydiUO2esQ)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, main_YHoiAZ9bjLaqD9cw6xkSk0kg)(void);
N_LIB_PRIVATE N_NIMCALL(NI64, max_PTmsl4bFBRkx9c8OPgoDu6g)(NI64* x, NI xLen_0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_futureInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_futureDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, E3DatInit000)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_Aav8dQoMlCFnZRxA0IhTHQ_;
TNimType NTI_IHUFRsFxZNv7YydiUO2esQ_;

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, is_primes_eBF9b3LdrNBWjsNiHf9alk5w)(NI x) {
	NIM_BOOL result;
	nimfr_("is_primes", "E3.nim");
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI TM_LbB9cBwMcpSCQSZ4EvRaQ8g_2;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(4, "E3.nim");
		TM_LbB9cBwMcpSCQSZ4EvRaQ8g_2 = divInt(x, ((NI) 2));
		colontmp_ = (NI)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_2);
		nimln_(2045, "system.nim");
		res = ((NI) 2);
		{
			nimln_(2046, "system.nim");
			while (1) {
				NI TM_LbB9cBwMcpSCQSZ4EvRaQ8g_4;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(2047, "system.nim");
				i = res;
				nimln_(5, "E3.nim");
				{
					NI TM_LbB9cBwMcpSCQSZ4EvRaQ8g_3;
					TM_LbB9cBwMcpSCQSZ4EvRaQ8g_3 = modInt(x, i);
					if (!((NI)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_3) == ((NI) 0))) goto LA6_;
					nimln_(6, "E3.nim");
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA6_: ;
				nimln_(2048, "system.nim");
				TM_LbB9cBwMcpSCQSZ4EvRaQ8g_4 = addInt(res, ((NI) 1));
				res = (NI)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_4);
			} LA3: ;
		}
	}
	nimln_(7, "E3.nim");
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_tySequence_IHUFRsFxZNv7YydiUO2esQ)(void* p, NI op) {
	tySequence_IHUFRsFxZNv7YydiUO2esQ* a;
	NI T1_;
	a = (tySequence_IHUFRsFxZNv7YydiUO2esQ*)p;
	T1_ = (NI)0;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI64)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(T7_)) goto LA8_;
		T7_ = (b == IL64(-1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI64)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_IHUFRsFxZNv7YydiUO2esQ*, primes_bv59ahigN5q9cPDT2ZuYyJhg)(NI64 n) {
	tySequence_IHUFRsFxZNv7YydiUO2esQ* result;
	tySequence_IHUFRsFxZNv7YydiUO2esQ* fac;
	NI64 m;
	NI p;
	nimfr_("primes", "E3.nim");
{	result = (tySequence_IHUFRsFxZNv7YydiUO2esQ*)0;
	nimln_(10, "E3.nim");
	fac = (tySequence_IHUFRsFxZNv7YydiUO2esQ*) newSeq((&NTI_IHUFRsFxZNv7YydiUO2esQ_), 0);
	nimln_(11, "E3.nim");
	m = n;
	nimln_(12, "E3.nim");
	p = ((NI) 2);
	{
		nimln_(13, "E3.nim");
		while (1) {
			if (!(((NI64) (p)) <= m)) goto LA2;
			nimln_(14, "E3.nim");
			{
				NI64 TM_LbB9cBwMcpSCQSZ4EvRaQ8g_5;
				NI T7_;
				NI64 TM_LbB9cBwMcpSCQSZ4EvRaQ8g_6;
				TM_LbB9cBwMcpSCQSZ4EvRaQ8g_5 = modInt64(m, ((NI64) (p)));
				if (!((NI64)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_5) == IL64(0))) goto LA5_;
				nimln_(15, "E3.nim");
				fac = (tySequence_IHUFRsFxZNv7YydiUO2esQ*) incrSeqV2(&(fac)->Sup, sizeof(NI64));
				T7_ = fac->Sup.len++;
				fac->data[T7_] = ((NI64) (p));
				nimln_(16, "E3.nim");
				TM_LbB9cBwMcpSCQSZ4EvRaQ8g_6 = divInt64(m, ((NI64) (p)));
				m = (NI64)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_6);
			}
			goto LA3_;
			LA5_: ;
			{
				NI TM_LbB9cBwMcpSCQSZ4EvRaQ8g_7;
				nimln_(18, "E3.nim");
				TM_LbB9cBwMcpSCQSZ4EvRaQ8g_7 = addInt(p, ((NI) 1));
				p = (NI)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_7);
				{
					nimln_(19, "E3.nim");
					while (1) {
						NIM_BOOL T11_;
						NI TM_LbB9cBwMcpSCQSZ4EvRaQ8g_8;
						T11_ = (NIM_BOOL)0;
						T11_ = is_primes_eBF9b3LdrNBWjsNiHf9alk5w(p);
						if (!!(T11_)) goto LA10;
						nimln_(20, "E3.nim");
						TM_LbB9cBwMcpSCQSZ4EvRaQ8g_8 = addInt(p, ((NI) 1));
						p = (NI)(TM_LbB9cBwMcpSCQSZ4EvRaQ8g_8);
					} LA10: ;
				}
			}
			LA3_: ;
		} LA2: ;
	}
	nimln_(21, "E3.nim");
	genericSeqAssign((&result), fac, (&NTI_IHUFRsFxZNv7YydiUO2esQ_));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, main_YHoiAZ9bjLaqD9cw6xkSk0kg)(void) {
	tyArray_nHXaesL0DJZHyVS07ARPRA T1_;
	tySequence_IHUFRsFxZNv7YydiUO2esQ* T2_;
	NI64 T3_;
	nimfr_("main", "E3.nim");
	nimln_(25, "E3.nim");
	memset((void*)T1_, 0, sizeof(T1_));
	T2_ = (tySequence_IHUFRsFxZNv7YydiUO2esQ*)0;
	T2_ = primes_bv59ahigN5q9cPDT2ZuYyJhg(IL64(600851475143));
	T3_ = (NI64)0;
	T3_ = max_PTmsl4bFBRkx9c8OPgoDu6g(T2_->data, T2_->Sup.len);
	T1_[0] = nimInt64ToStr(T3_);
	echoBinSafe(T1_, 1);
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_macrosDatInit000();
	stdlib_sequtilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_futureDatInit000();
	E3DatInit000();
	stdlib_macrosInit000();
	stdlib_sequtilsInit000();
	stdlib_mathInit000();
	stdlib_futureInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	nimfr_("E3", "E3.nim");
	nimln_(27, "E3.nim");
	{
		if (!NIM_TRUE) goto LA3_;
		nimln_(28, "E3.nim");
		main_YHoiAZ9bjLaqD9cw6xkSk0kg();
	}
	LA3_: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, E3DatInit000)(void) {
NTI_IHUFRsFxZNv7YydiUO2esQ_.size = sizeof(tySequence_IHUFRsFxZNv7YydiUO2esQ*);
NTI_IHUFRsFxZNv7YydiUO2esQ_.kind = 24;
NTI_IHUFRsFxZNv7YydiUO2esQ_.base = (&NTI_Aav8dQoMlCFnZRxA0IhTHQ_);
NTI_IHUFRsFxZNv7YydiUO2esQ_.flags = 2;
NTI_IHUFRsFxZNv7YydiUO2esQ_.marker = Marker_tySequence_IHUFRsFxZNv7YydiUO2esQ;
}

