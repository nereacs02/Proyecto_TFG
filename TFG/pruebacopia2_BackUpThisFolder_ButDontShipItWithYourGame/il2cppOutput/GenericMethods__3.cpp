﻿#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB;
struct ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C;
struct ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E;
struct ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E;
struct ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9;
struct ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7;
struct ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA;
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F;
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716;
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE;
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335;
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8;
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9;
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct IComparer_1_tDB7A782F030D1F22435005452CBF1E29F96270E4;
struct IComparer_1_t89C4E63A6B545FDD3EC0799A4859952B166D7A86;
struct IComparer_1_tD750B2EA2446E11DC218C7892191F70BB0C7F3A7;
struct IComparer_1_t4D029341FFA75E7675C4EE183A821B211C8FB54B;
struct IComparer_1_tA50CAEBCA2CA795A97D2F33F2AF163575875C4E3;
struct IComparer_1_t46F9FE1016362061B3F1D548198178796836F27D;
struct IComparer_1_t118D1F2A98443615B6BA57307440F0021118D8CA;
struct IComparer_1_t7056DE2557FBAA4AF1EAAEC67C53580083EA6988;
struct IComparer_1_tFB0FD319B9E8EF0EC1FC77A9ED2E0259361E126E;
struct IComparer_1_t3FA52899D0A91FBF89D2AA6B7ED4862C158AE928;
struct IComparer_1_t5CD2EA70F165FCB6FC40194D89CF91B3CA8950AF;
struct IComparer_1_t0B85161F68B142616820C04AAE96C1609ECFC796;
struct IComparer_1_t98BCABD0BCDEE9EA1C3A43AD895CC0531158CCEC;
struct IComparer_1_t6CE56973B322EEBB12966CB4F68B814B3420D5F3;
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050;
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513;
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB  : public RuntimeObject
{
};
struct ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C  : public RuntimeObject
{
};
struct ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E  : public RuntimeObject
{
};
struct ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9  : public RuntimeObject
{
};
struct ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7  : public RuntimeObject
{
};
struct ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F  : public RuntimeObject
{
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716  : public RuntimeObject
{
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE  : public RuntimeObject
{
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335  : public RuntimeObject
{
};
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65  : public RuntimeObject
{
};
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C  : public RuntimeObject
{
};
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F  : public RuntimeObject
{
};
struct IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C  : public RuntimeObject
{
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Item_t68017D36B9F921654433B5577F16E84594B8030B 
{
	RuntimeObject* ___Key;
	bool ___Value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	RuntimeObject* ___key;
	bool ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C 
{
	void* ____buffer;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 
{
	int64_t ___f0;
	int64_t ___f1;
	int64_t ___f2;
	int64_t ___f3;
	int64_t ___f4;
	int64_t ___f5;
	int64_t ___f6;
	int64_t ___f7;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB 
{
	int32_t ___m_Lock;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB 
{
	intptr_t ___m_pointer;
	int32_t ___m_length;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_allocator;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	bool ___m_disposed;
	intptr_t ___m_jobject;
};
struct Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D 
{
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f0;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f1;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f2;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f3;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f4;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f5;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f6;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f7;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B 
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___key;
	RuntimeObject* ___value;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 
{
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f0;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f1;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f2;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f3;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f4;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f5;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f6;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f7;
};
struct RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254 
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB ___m_spinner;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle;
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB ___m_block;
	int32_t ___m_last;
	int32_t ___m_used;
	uint8_t ___m_enableBlockFree;
	uint8_t ___m_reachMaxBlockSize;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C 
{
	RuntimeObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Long1024_tEE887C506947419DC829213E6C7483D80AF5659F 
{
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f0;
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f1;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB_StaticFields
{
	ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C_StaticFields
{
	ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E_StaticFields
{
	ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E_StaticFields
{
	ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9_StaticFields
{
	ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7_StaticFields
{
	ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA_StaticFields
{
	ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields
{
	ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields
{
	ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields
{
	ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields
{
	ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8_StaticFields
{
	ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9_StaticFields
{
	ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65_StaticFields
{
	ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ___s_defaultArraySortHelper;
};
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Invalid;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___None;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Temp;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___TempJob;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Persistent;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___AudioKernel;
	uint16_t ___NumGlobalScratchAllocators;
	uint16_t ___MaxNumGlobalAllocators;
	uint32_t ___GlobalAllocatorBaseIndex;
	uint32_t ___FirstGlobalScratchpadAllocatorIndex;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_StaticFields
{
	SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C ___Ref;
};
struct IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields
{
	SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C ___Ref;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
};
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F  : public RuntimeArray
{
	ALIGN_FIELD (8) ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 m_Items[1];

	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array), (void*)NULL);
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array), (void*)NULL);
	}
};
struct ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t68017D36B9F921654433B5577F16E84594B8030B m_Items[1];

	inline Item_t68017D36B9F921654433B5577F16E84594B8030B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t68017D36B9F921654433B5577F16E84594B8030B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t68017D36B9F921654433B5577F16E84594B8030B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
	inline Item_t68017D36B9F921654433B5577F16E84594B8030B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t68017D36B9F921654433B5577F16E84594B8030B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t68017D36B9F921654433B5577F16E84594B8030B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 m_Items[1];

	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B m_Items[1];

	inline KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 m_Items[1];

	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C m_Items[1];

	inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
};
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 m_Items[1];

	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD m_Items[1];

	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 m_Items[1];

	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 m_Items[1];

	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B m_Items[1];

	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 m_Items[1];

	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 m_Items[1];

	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_gshared (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_gshared (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* ___0_t, int32_t ___1_offset, int32_t ___2_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_m5B818220FAB53B22E61917AC1A8AE36C1B1DA151_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0_gshared (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* __this, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* ArraySortHelper_1_get_Default_m6BA01E79B5B27D206C51F5E56B36811B7896B009_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m520EC7BDDCCC180851C0C785EEC811F55B8B06AC_gshared (ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* __this, ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t68017D36B9F921654433B5577F16E84594B8030B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* ArraySortHelper_1_get_Default_mDD5D0B16EB2A2C278BE0F9244B26EE1E701D9102_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mB2E909573942781DC38C9F90C39A472725B0DF50_gshared (ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* ArraySortHelper_1_get_Default_m918C9D40E83F414DDB1232A61EE286EFB330D87B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m2C9D515B4A34DE9B2A32E4EF64D98EEBFF391EED_gshared (ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* __this, KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* ArraySortHelper_1_get_Default_mD14C7264E9F94299E44FF82A2A04A3EDFA8C818B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m5D35FE2D3F8E9252756BE0B25625D108F87D9F48_gshared (ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* ArraySortHelper_1_get_Default_mB15F67B355576D0D8B2C59CC953654D5D691B43C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m98C7CA2BEA4A01A2FA981E5A6BA3E22BF855325F_gshared (ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* ArraySortHelper_1_get_Default_mF9C64F5E5D08A42BE9CAFA6F0CA5EC508CCE4A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m38BFB3C324F1B5B2B743554A592163FC278DA81D_gshared (ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* __this, KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5_gshared (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F_gshared (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* __this, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E_gshared (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
inline Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545 (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C* __this, const RuntimeMethod* method)
{
	return ((  Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* (*) (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C*, const RuntimeMethod*))SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
inline int32_t ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323 (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* ___0_t, int32_t ___1_offset, int32_t ___2_bits, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F*, int32_t, int32_t, const RuntimeMethod*))ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_gshared)(___0_t, ___1_offset, ___2_bits, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107 (uint8_t* ___0_buffer, int64_t ___1_capacity, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared)(___0_nativeArray, method);
}
inline bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared)(___0_array, method);
}
inline Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared)(___0_array, method);
}
inline double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared)(___0_array, method);
}
inline int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared)(___0_array, method);
}
inline int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared)(___0_array, method);
}
inline int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared)(___0_array, method);
}
inline RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared)(___0_array, method);
}
inline int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared)(___0_array, method);
}
inline float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared)(___0_array, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared)(___0_array, method);
}
inline Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared)(___0_array, method);
}
inline double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared)(___0_array, method);
}
inline int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared)(___0_array, method);
}
inline int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared)(___0_array, method);
}
inline int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared)(___0_array, method);
}
inline RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared)(___0_array, method);
}
inline int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared)(___0_array, method);
}
inline float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared)(__this, ___0_fieldName, method);
}
inline RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared)(__this, ___0_fieldName, method);
}
inline void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared)(___0_jobject, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120 (intptr_t ___0_obj, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E (intptr_t ___0_obj, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33 (intptr_t ___0_obj, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D (intptr_t ___0_obj, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35 (intptr_t ___0_obj, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58 (intptr_t ___0_obj, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9 (intptr_t ___0_obj, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409 (intptr_t ___0_obj, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA (intptr_t ___0_obj, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13 (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E (intptr_t ___0_clazz, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE (intptr_t ___0_clazz, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956 (intptr_t ___0_clazz, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613 (intptr_t ___0_clazz, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE (intptr_t ___0_clazz, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721 (intptr_t ___0_clazz, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65 (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___0_list, method);
}
inline int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, uint64_t, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Array_BinarySearch_TisRuntimeObject_m5B818220FAB53B22E61917AC1A8AE36C1B1DA151 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_m5B818220FAB53B22E61917AC1A8AE36C1B1DA151_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0 (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* __this, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB*, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F*, int32_t, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* ArraySortHelper_1_get_Default_m6BA01E79B5B27D206C51F5E56B36811B7896B009_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m6BA01E79B5B27D206C51F5E56B36811B7896B009_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m520EC7BDDCCC180851C0C785EEC811F55B8B06AC (ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* __this, ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t68017D36B9F921654433B5577F16E84594B8030B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C*, ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258*, int32_t, int32_t, Item_t68017D36B9F921654433B5577F16E84594B8030B, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m520EC7BDDCCC180851C0C785EEC811F55B8B06AC_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* ArraySortHelper_1_get_Default_mDD5D0B16EB2A2C278BE0F9244B26EE1E701D9102_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDD5D0B16EB2A2C278BE0F9244B26EE1E701D9102_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mB2E909573942781DC38C9F90C39A472725B0DF50 (ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E*, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*, int32_t, int32_t, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mB2E909573942781DC38C9F90C39A472725B0DF50_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* ArraySortHelper_1_get_Default_m918C9D40E83F414DDB1232A61EE286EFB330D87B_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m918C9D40E83F414DDB1232A61EE286EFB330D87B_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m2C9D515B4A34DE9B2A32E4EF64D98EEBFF391EED (ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* __this, KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E*, KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77*, int32_t, int32_t, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m2C9D515B4A34DE9B2A32E4EF64D98EEBFF391EED_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* ArraySortHelper_1_get_Default_mD14C7264E9F94299E44FF82A2A04A3EDFA8C818B_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mD14C7264E9F94299E44FF82A2A04A3EDFA8C818B_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m5D35FE2D3F8E9252756BE0B25625D108F87D9F48 (ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9*, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*, int32_t, int32_t, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m5D35FE2D3F8E9252756BE0B25625D108F87D9F48_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* ArraySortHelper_1_get_Default_mB15F67B355576D0D8B2C59CC953654D5D691B43C_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mB15F67B355576D0D8B2C59CC953654D5D691B43C_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m98C7CA2BEA4A01A2FA981E5A6BA3E22BF855325F (ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7*, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t, int32_t, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m98C7CA2BEA4A01A2FA981E5A6BA3E22BF855325F_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* ArraySortHelper_1_get_Default_mF9C64F5E5D08A42BE9CAFA6F0CA5EC508CCE4A15_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mF9C64F5E5D08A42BE9CAFA6F0CA5EC508CCE4A15_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m38BFB3C324F1B5B2B743554A592163FC278DA81D (ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* __this, KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA*, KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674*, int32_t, int32_t, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m38BFB3C324F1B5B2B743554A592163FC278DA81D_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F*, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*, int32_t, int32_t, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64 (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716*, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*, int32_t, int32_t, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE*, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4*, int32_t, int32_t, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819 (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335*, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*, int32_t, int32_t, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5 (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8*, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD*, int32_t, int32_t, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* __this, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9*, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376*, int32_t, int32_t, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65*, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990*, int32_t, int32_t, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Unregister_TisRewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_m9A4CBB4B25F9752F36118A0658985C25F8FADB1A_gshared (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_1;
		bool L_2;
		L_2 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_1), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* L_4 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5;
		L_5 = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_5;
		AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_6;
		L_6 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* L_7 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_8;
		int32_t L_9;
		L_9 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_10;
		L_10 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_6, L_9, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_11;
		L_11 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_StaticFields*)il2cpp_codegen_static_fields_for(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* L_12 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_13;
		L_13 = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_13;
		int32_t L_14;
		L_14 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_15;
		L_15 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_11, L_14, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* L_16 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_17;
		L_17 = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_18 = L_17.___Index;
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46((int32_t)L_18, NULL);
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Unregister_TisIl2CppFullySharedGenericStruct_m1782C417767DBDCC0F33DE0B0ACCEE7BE0C9570D_gshared (Il2CppFullySharedGenericStruct* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	bool V_0 = false;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_1 = L_2;
		bool L_3;
		L_3 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_1), NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_5 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)L_5);
		V_1 = L_7;
		AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_8;
		L_8 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_9 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11;
		L_11 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)L_9);
		V_1 = L_11;
		int32_t L_12;
		L_12 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_13;
		L_13 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_8, L_12, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_14;
		L_14 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_StaticFields*)il2cpp_codegen_static_fields_for(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_15 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_17;
		L_17 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_16, (void*)L_15);
		V_1 = L_17;
		int32_t L_18;
		L_18 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_19;
		L_19 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_14, L_18, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_20 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_22;
		L_22 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_21, (void*)L_20);
		uint16_t L_23 = L_22.___Index;
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46((int32_t)L_23, NULL);
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Unregister_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB8321A6BD18AF456ABC30E251B65EDA0381ECE93_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_1;
		bool L_2;
		L_2 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_1), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_4 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5;
		L_5 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_5;
		AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_6;
		L_6 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_7 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_8;
		int32_t L_9;
		L_9 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_10;
		L_10 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_6, L_9, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_11;
		L_11 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_StaticFields*)il2cpp_codegen_static_fields_for(IsAutoDispose_t042DBFFA97CC00077DEB1A53BB0046B580CFE27F_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_12 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_13;
		L_13 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_13;
		int32_t L_14;
		L_14 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_1), NULL);
		int32_t L_15;
		L_15 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_11, L_14, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_16 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_17;
		L_17 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_18 = L_17.___Index;
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46((int32_t)L_18, NULL);
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AndroidJNI_GetDirectBuffer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m971CFD6732DCF55F07C2820EA7F2D685FED934CD_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int64_class, &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 AndroidJNI_GetDirectBuffer_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD58C4C3DF41E0AFB0378C0FF602335B30319D382_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int64_class, &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AndroidJNI_GetDirectBuffer_TisIl2CppFullySharedGenericStruct_mA240D97969B6DC457DEC6F6EB97FDE5D94F28C29_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int64_class, &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22;
		L_22 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CA9D512889E4FD11E06BC83A1E6FE316CD1BC0F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = ___0_buffer;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB9A49EBBCCE6CE5AF7544594285D5F56E7EF279C_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_3 = ___0_buffer;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisIl2CppFullySharedGenericStruct_mBA315BD28FAF24143A02065102FEC37584F134D1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = ___0_buffer;
		void* L_4;
		L_4 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar V_0 = 0x0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppChar L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	double V_0 = 0.0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int16_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int8_t V_0 = 0x0;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float V_0 = 0.0f;
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mE2FE04F1AE05E31AFCB6C62A0D8015274310BBE7_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	memset(V_0, 0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_mD4DFA0128576804E9AE4FF17BD3D1398F2196069_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mEB124826B537513D20B0E11A265E04D0612E1CE8_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m4D04F21DE5CB13BC4E2A08505DA57AC729F3BA70_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppChar L_2;
		L_2 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		double L_2;
		L_2 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int16_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int8_t L_2;
		L_2 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		float L_2;
		L_2 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mC798093D4EE507666B4D04C1237E82DFBBACE706_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	memset(V_0, 0, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	memset(V_0, 0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mDA393DFB3EA03B230F3982EC0F62EED04C1B755E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE94FE031A180D9514AA8E28338270133654A7412_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	memset(V_0, 0, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	memset(V_0, 0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m98714A38A15645388BE9EE530213C7EDB49C34AF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	memset(V_0, 0, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	memset(V_0, 0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m9E915D63BD1F4FB05B49296EEFE25B86C30EA692_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4C097E550C3D8A103BE65545A8CB9E688DCE341E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	memset(V_0, 0, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	memset(V_0, 0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		bool L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(bool*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		Il2CppChar L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(Il2CppChar*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		Il2CppChar L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(double));
		double L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		double L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(double*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		double L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		int16_t L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(int16_t*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		int16_t L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		int32_t L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(int32_t*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int64_t));
		int64_t L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		int64_t L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(int64_t*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		int64_t L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		RuntimeObject* L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int8_t V_1 = 0x0;
	int8_t V_2 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		int8_t L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(int8_t*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		int8_t L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		float L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		float L_5;
		L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_6);
		V_2 = ((*(float*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_002f;
	}

IL_002f:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArray_TisIl2CppFullySharedGenericAny_m4D8E7ACD1BBB7E3FEC7BA69AF6C620E70D8BBC3E_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	memset(V_1, 0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	memset(V_2, 0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(V_2, L_3, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		goto IL_002f;
	}

IL_001c:
	{
		intptr_t L_4 = ___0_jobject;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, (Il2CppFullySharedGenericAny*)L_5);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_5);
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->rgctx_data, 0), L_7);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		goto IL_002f;
	}

IL_002f:
	{
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			int32_t L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(int32_t*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			RuntimeObject* L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_2 = L_6;
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_m5BC2B7B267EBFB3D33E1D15F5F5DFEF99AB48E84_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_10 = L_3;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_1, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_2, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(V_2, L_3, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, (Il2CppFullySharedGenericAny*)L_6);
			RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
			void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 0), L_8);
			il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_fieldName;
		int32_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m0921C141B8FD194E4F423401D827FCB547354135_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	memset(V_0, 0, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	memset(V_0, 0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_fieldName;
		RuntimeObject* L_1;
		L_1 = AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_m7E7CB28FD389C5D15A289C22C10EEBB9E64567B9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	memset(V_0, 0, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	memset(V_0, 0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_mEB42AA9151144DAA56A324FBF5A564C71A65D35E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mFB380E32D4FBFB41D3870427D3227A38E72F3D7C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool G_B31_0 = false;
	bool G_B36_0 = false;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(bool*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(bool*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(bool*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(bool*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(bool*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(bool*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(bool*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(bool*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(bool*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(bool*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(bool*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(bool*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				bool L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		bool L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppChar V_18 = 0x0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppChar G_B31_0 = 0x0;
	Il2CppChar G_B36_0 = 0x0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(Il2CppChar*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(Il2CppChar*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(Il2CppChar*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(Il2CppChar*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(Il2CppChar*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(Il2CppChar*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(Il2CppChar*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(Il2CppChar*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(Il2CppChar*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				Il2CppChar L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		Il2CppChar L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar V_1 = 0x0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppChar L_7;
		L_7 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		Il2CppChar L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	double V_6 = 0.0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	double V_18 = 0.0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	double G_B31_0 = 0.0;
	double G_B36_0 = 0.0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(double*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(double*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(double*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(double*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(double*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(double*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(double*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(double*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(double*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(double*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(double*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(double*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				double L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		double L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		double L_7;
		L_7 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		double L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int16_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int16_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int16_t G_B31_0 = 0;
	int16_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(int16_t*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(int16_t*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(int16_t*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(int16_t*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(int16_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(int16_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(int16_t*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(int16_t*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(int16_t*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(int16_t*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				int16_t L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		int16_t L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int16_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int16_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(int32_t*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(int32_t*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(int32_t*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(int32_t*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(int32_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(int32_t*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(int32_t*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(int32_t*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(int32_t*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				int32_t L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		int32_t L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int64_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int64_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int64_t G_B31_0 = 0;
	int64_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(int64_t*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(int64_t*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(int64_t*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(int64_t*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(int64_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(int64_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(int64_t*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(int64_t*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(int64_t*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(int64_t*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				int64_t L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		int64_t L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int64_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int64_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	RuntimeObject* V_18 = NULL;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B36_0 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_45, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_97, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_136, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				RuntimeObject* L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		RuntimeObject* L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		RuntimeObject* L_7;
		L_7 = AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int8_t V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int8_t V_18 = 0x0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int8_t G_B31_0 = 0x0;
	int8_t G_B36_0 = 0x0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(int8_t*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(int8_t*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(int8_t*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(int8_t*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(int8_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(int8_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(int8_t*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(int8_t*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(int8_t*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(int8_t*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				int8_t L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		int8_t L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t V_1 = 0x0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int8_t L_7;
		L_7 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int8_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	float G_B31_0 = 0.0f;
	float G_B36_0 = 0.0f;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(float*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jobject;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(float*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(float*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(float*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(float*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(float*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jobject;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(float*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(float*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(float*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_144, L_145, L_146, NULL);
				V_6 = ((*(float*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jobject;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(float*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jobject;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(float*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jobject;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				float L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		float L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		float L_7;
		L_7 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_m4720E88EC57849809AFC4A771495414E75120D8F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	const Il2CppFullySharedGenericAny L_48 = L_33;
	const Il2CppFullySharedGenericAny L_63 = L_33;
	const Il2CppFullySharedGenericAny L_78 = L_33;
	const Il2CppFullySharedGenericAny L_93 = L_33;
	const Il2CppFullySharedGenericAny L_108 = L_33;
	const Il2CppFullySharedGenericAny L_123 = L_33;
	const Il2CppFullySharedGenericAny L_138 = L_33;
	const Il2CppFullySharedGenericAny L_153 = L_33;
	const Il2CppFullySharedGenericAny L_166 = L_33;
	const Il2CppFullySharedGenericAny L_183 = L_33;
	const Il2CppFullySharedGenericAny L_185 = L_33;
	const Il2CppFullySharedGenericAny L_201 = L_33;
	const Il2CppFullySharedGenericAny L_203 = L_33;
	const Il2CppFullySharedGenericAny L_216 = L_33;
	const Il2CppFullySharedGenericAny L_223 = L_33;
	const Il2CppFullySharedGenericAny L_224 = L_33;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_6, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppFullySharedGenericAny V_18 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_18, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B31_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B36_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				void* L_34 = UnBox_Any(L_32, il2cpp_rgctx_data(method->rgctx_data, 1), L_33);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_34)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_38;
				L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
				bool L_39;
				L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
				V_7 = L_39;
				bool L_40 = V_7;
				if (!L_40)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jobject;
				intptr_t L_42;
				L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_41, NULL);
				intptr_t L_43 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_44 = V_0;
				bool L_45;
				L_45 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_42, L_43, L_44, NULL);
				bool L_46 = L_45;
				RuntimeObject* L_47 = Box(il2cpp_defaults.boolean_class, &L_46);
				void* L_49 = UnBox_Any(L_47, il2cpp_rgctx_data(method->rgctx_data, 1), L_48);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_49)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_51;
				L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_53;
				L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
				bool L_54;
				L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
				V_8 = L_54;
				bool L_55 = V_8;
				if (!L_55)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int8_t L_60;
				L_60 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_57, L_58, L_59, NULL);
				uint8_t L_61 = ((uint8_t)((int32_t)(uint8_t)L_60));
				RuntimeObject* L_62 = Box(il2cpp_defaults.byte_class, &L_61);
				void* L_64 = UnBox_Any(L_62, il2cpp_rgctx_data(method->rgctx_data, 1), L_63);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_64)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_66;
				L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				bool L_69;
				L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
				V_9 = L_69;
				bool L_70 = V_9;
				if (!L_70)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_71 = __this->___m_jobject;
				intptr_t L_72;
				L_72 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_71, NULL);
				intptr_t L_73 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_74 = V_0;
				int8_t L_75;
				L_75 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_72, L_73, L_74, NULL);
				int8_t L_76 = L_75;
				RuntimeObject* L_77 = Box(il2cpp_defaults.sbyte_class, &L_76);
				void* L_79 = UnBox_Any(L_77, il2cpp_rgctx_data(method->rgctx_data, 1), L_78);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_79)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_81;
				L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_83;
				L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
				bool L_84;
				L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
				V_10 = L_84;
				bool L_85 = V_10;
				if (!L_85)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jobject;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				int16_t L_90;
				L_90 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_87, L_88, L_89, NULL);
				int16_t L_91 = L_90;
				RuntimeObject* L_92 = Box(il2cpp_defaults.int16_class, &L_91);
				void* L_94 = UnBox_Any(L_92, il2cpp_rgctx_data(method->rgctx_data, 1), L_93);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_94)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_96;
				L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				bool L_99;
				L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
				V_11 = L_99;
				bool L_100 = V_11;
				if (!L_100)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_101 = __this->___m_jobject;
				intptr_t L_102;
				L_102 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_101, NULL);
				intptr_t L_103 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_104 = V_0;
				int64_t L_105;
				L_105 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_102, L_103, L_104, NULL);
				int64_t L_106 = L_105;
				RuntimeObject* L_107 = Box(il2cpp_defaults.int64_class, &L_106);
				void* L_109 = UnBox_Any(L_107, il2cpp_rgctx_data(method->rgctx_data, 1), L_108);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_109)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_12 = L_114;
				bool L_115 = V_12;
				if (!L_115)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				float L_120;
				L_120 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_117, L_118, L_119, NULL);
				float L_121 = L_120;
				RuntimeObject* L_122 = Box(il2cpp_defaults.single_class, &L_121);
				void* L_124 = UnBox_Any(L_122, il2cpp_rgctx_data(method->rgctx_data, 1), L_123);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_124)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				bool L_129;
				L_129 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_126, L_128, NULL);
				V_13 = L_129;
				bool L_130 = V_13;
				if (!L_130)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_131 = __this->___m_jobject;
				intptr_t L_132;
				L_132 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_131, NULL);
				intptr_t L_133 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_134 = V_0;
				double L_135;
				L_135 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_132, L_133, L_134, NULL);
				double L_136 = L_135;
				RuntimeObject* L_137 = Box(il2cpp_defaults.double_class, &L_136);
				void* L_139 = UnBox_Any(L_137, il2cpp_rgctx_data(method->rgctx_data, 1), L_138);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_139)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_141;
				L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_143;
				L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
				bool L_144;
				L_144 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_141, L_143, NULL);
				V_14 = L_144;
				bool L_145 = V_14;
				if (!L_145)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_146 = __this->___m_jobject;
				intptr_t L_147;
				L_147 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_146, NULL);
				intptr_t L_148 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_149 = V_0;
				Il2CppChar L_150;
				L_150 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_147, L_148, L_149, NULL);
				Il2CppChar L_151 = L_150;
				RuntimeObject* L_152 = Box(il2cpp_defaults.char_class, &L_151);
				void* L_154 = UnBox_Any(L_152, il2cpp_rgctx_data(method->rgctx_data, 1), L_153);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_154)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_155 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_156;
				L_156 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_155, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_157 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_158;
				L_158 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_157, NULL);
				bool L_159;
				L_159 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_156, L_158, NULL);
				V_15 = L_159;
				bool L_160 = V_15;
				if (!L_160)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_161 = __this->___m_jobject;
				intptr_t L_162;
				L_162 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_161, NULL);
				intptr_t L_163 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_164 = V_0;
				String_t* L_165;
				L_165 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_162, L_163, L_164, NULL);
				void* L_167 = UnBox_Any((RuntimeObject*)L_165, il2cpp_rgctx_data(method->rgctx_data, 1), L_166);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_167)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_169;
				L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_171;
				L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
				bool L_172;
				L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
				V_16 = L_172;
				bool L_173 = V_16;
				if (!L_173)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_174 = __this->___m_jobject;
				intptr_t L_175;
				L_175 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_174, NULL);
				intptr_t L_176 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_177 = V_0;
				intptr_t L_178;
				L_178 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_175, L_176, L_177, NULL);
				V_17 = L_178;
				intptr_t L_179 = V_17;
				bool L_180;
				L_180 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_179, 0, NULL);
				if (L_180)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_181 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_182 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_182, L_181, NULL);
				void* L_184 = UnBox_Any((RuntimeObject*)L_182, il2cpp_rgctx_data(method->rgctx_data, 1), L_183);
				il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_184)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_185, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B31_0, L_185, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_0359_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B31_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_186 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_187;
				L_187 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_186, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_189;
				L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
				bool L_190;
				L_190 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_187, L_189, NULL);
				V_19 = L_190;
				bool L_191 = V_19;
				if (!L_191)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_192 = __this->___m_jobject;
				intptr_t L_193;
				L_193 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_192, NULL);
				intptr_t L_194 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_195 = V_0;
				intptr_t L_196;
				L_196 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_193, L_194, L_195, NULL);
				V_20 = L_196;
				intptr_t L_197 = V_20;
				bool L_198;
				L_198 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_197, 0, NULL);
				if (L_198)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_199 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_200 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_200, L_199, NULL);
				void* L_202 = UnBox_Any((RuntimeObject*)L_200, il2cpp_rgctx_data(method->rgctx_data, 1), L_201);
				il2cpp_codegen_memcpy(G_B36_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_202)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_203, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B36_0, L_203, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_03ba_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B36_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_205;
				L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_206 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_207;
				L_207 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_206, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_208;
				L_208 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_205, L_207, NULL);
				V_21 = L_208;
				bool L_209 = V_21;
				if (!L_209)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_210 = __this->___m_jobject;
				intptr_t L_211;
				L_211 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_210, NULL);
				intptr_t L_212 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_213 = V_0;
				intptr_t L_214;
				L_214 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_211, L_212, L_213, NULL);
				V_22 = L_214;
				intptr_t L_215 = V_22;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_215, (Il2CppFullySharedGenericAny*)L_216);
				il2cpp_codegen_memcpy(V_6, L_216, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_218;
				L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
				Type_t* L_219 = L_218;
				if (L_219)
				{
					G_B41_0 = L_219;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_219;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_220;
				L_220 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_220;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_221;
				L_221 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_222 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_222, L_221, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_222, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_223, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(V_6, L_223, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		il2cpp_codegen_memcpy(L_224, V_6, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		il2cpp_codegen_memcpy(il2cppRetVal, L_224, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_1, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		goto IL_0020;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool G_B31_0 = false;
	bool G_B36_0 = false;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(bool*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jclass;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(bool*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jclass;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(bool*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(bool*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jclass;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(bool*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jclass;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(bool*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jclass;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(bool*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jclass;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(bool*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jclass;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(bool*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_144, L_145, L_146, NULL);
				V_6 = ((*(bool*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jclass;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(bool*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jclass;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(bool*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jclass;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				bool L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		bool L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((*(int32_t*)UnBox(L_32, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jclass;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((*(int32_t*)UnBox(L_45, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jclass;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((*(int32_t*)UnBox(L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((*(int32_t*)UnBox(L_71, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jclass;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((*(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jclass;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((*(int32_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jclass;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((*(int32_t*)UnBox(L_110, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jclass;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((*(int32_t*)UnBox(L_123, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jclass;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((*(int32_t*)UnBox(L_136, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_144, L_145, L_146, NULL);
				V_6 = ((*(int32_t*)UnBox((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jclass;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jclass;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jclass;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				int32_t L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		int32_t L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	RuntimeObject* V_18 = NULL;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B36_0 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				bool L_37;
				L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
				V_7 = L_37;
				bool L_38 = V_7;
				if (!L_38)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_39 = __this->___m_jclass;
				intptr_t L_40;
				L_40 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_39, NULL);
				intptr_t L_41 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_42 = V_0;
				bool L_43;
				L_43 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_40, L_41, L_42, NULL);
				bool L_44 = L_43;
				RuntimeObject* L_45 = Box(il2cpp_defaults.boolean_class, &L_44);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_45, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_8 = L_50;
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jclass;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_55 = V_0;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(il2cpp_defaults.byte_class, &L_57);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				bool L_63;
				L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
				V_9 = L_63;
				bool L_64 = V_9;
				if (!L_64)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
				intptr_t L_66;
				L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
				intptr_t L_67 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_68 = V_0;
				int8_t L_69;
				L_69 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_66, L_67, L_68, NULL);
				int8_t L_70 = L_69;
				RuntimeObject* L_71 = Box(il2cpp_defaults.sbyte_class, &L_70);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_75;
				L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
				bool L_76;
				L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
				V_10 = L_76;
				bool L_77 = V_10;
				if (!L_77)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jclass;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				int16_t L_82;
				L_82 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_79, L_80, L_81, NULL);
				int16_t L_83 = L_82;
				RuntimeObject* L_84 = Box(il2cpp_defaults.int16_class, &L_83);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_84, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_86;
				L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_88;
				L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
				bool L_89;
				L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
				V_11 = L_89;
				bool L_90 = V_11;
				if (!L_90)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jclass;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				int64_t L_95;
				L_95 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_92, L_93, L_94, NULL);
				int64_t L_96 = L_95;
				RuntimeObject* L_97 = Box(il2cpp_defaults.int64_class, &L_96);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_97, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_99;
				L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_101;
				L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
				bool L_102;
				L_102 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_99, L_101, NULL);
				V_12 = L_102;
				bool L_103 = V_12;
				if (!L_103)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_104 = __this->___m_jclass;
				intptr_t L_105;
				L_105 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_104, NULL);
				intptr_t L_106 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_107 = V_0;
				float L_108;
				L_108 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_105, L_106, L_107, NULL);
				float L_109 = L_108;
				RuntimeObject* L_110 = Box(il2cpp_defaults.single_class, &L_109);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_114;
				L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
				bool L_115;
				L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
				V_13 = L_115;
				bool L_116 = V_13;
				if (!L_116)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jclass;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				double L_121;
				L_121 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_118, L_119, L_120, NULL);
				double L_122 = L_121;
				RuntimeObject* L_123 = Box(il2cpp_defaults.double_class, &L_122);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_14 = L_128;
				bool L_129 = V_14;
				if (!L_129)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jclass;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				Il2CppChar L_134;
				L_134 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_131, L_132, L_133, NULL);
				Il2CppChar L_135 = L_134;
				RuntimeObject* L_136 = Box(il2cpp_defaults.char_class, &L_135);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_136, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_138;
				L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				bool L_141;
				L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
				V_15 = L_141;
				bool L_142 = V_15;
				if (!L_142)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
				intptr_t L_144;
				L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
				intptr_t L_145 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_146 = V_0;
				String_t* L_147;
				L_147 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_144, L_145, L_146, NULL);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
				bool L_152;
				L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
				V_16 = L_152;
				bool L_153 = V_16;
				if (!L_153)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_154 = __this->___m_jclass;
				intptr_t L_155;
				L_155 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_154, NULL);
				intptr_t L_156 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_157 = V_0;
				intptr_t L_158;
				L_158 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_155, L_156, L_157, NULL);
				V_17 = L_158;
				intptr_t L_159 = V_17;
				bool L_160;
				L_160 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_159, 0, NULL);
				if (L_160)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_161 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_162 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_162, L_161, NULL);
				G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_162, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_163 = V_18;
				G_B31_0 = L_163;
			}

IL_0359_1:
			{
				V_6 = G_B31_0;
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_19 = L_168;
				bool L_169 = V_19;
				if (!L_169)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = __this->___m_jclass;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_173 = V_0;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_171, L_172, L_173, NULL);
				V_20 = L_174;
				intptr_t L_175 = V_20;
				bool L_176;
				L_176 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_175, 0, NULL);
				if (L_176)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_177 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_178 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_178, L_177, NULL);
				G_B36_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_178, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_179 = V_18;
				G_B36_0 = L_179;
			}

IL_03ba_1:
			{
				V_6 = G_B36_0;
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_183;
				L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_184;
				L_184 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_181, L_183, NULL);
				V_21 = L_184;
				bool L_185 = V_21;
				if (!L_185)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_186 = __this->___m_jclass;
				intptr_t L_187;
				L_187 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_186, NULL);
				intptr_t L_188 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_189 = V_0;
				intptr_t L_190;
				L_190 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_187, L_188, L_189, NULL);
				V_22 = L_190;
				intptr_t L_191 = V_22;
				RuntimeObject* L_192;
				L_192 = AndroidJavaObject_FromJavaArray_TisRuntimeObject_m1C7A86D7F54E81A9BEA37FE359D4E0C2314D2A1A(L_191, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_192;
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_194;
				L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
				Type_t* L_195 = L_194;
				if (L_195)
				{
					G_B41_0 = L_195;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_195;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_196;
				L_196 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_196;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_197;
				L_197 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_198 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_198, L_197, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_199 = V_18;
				V_6 = L_199;
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		RuntimeObject* L_200 = V_6;
		return L_200;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		RuntimeObject* L_7;
		L_7 = AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_m8D1EB1F6B7C8D0B7D54EF55F42BCE6B7576E0953_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	const Il2CppFullySharedGenericAny L_48 = L_33;
	const Il2CppFullySharedGenericAny L_63 = L_33;
	const Il2CppFullySharedGenericAny L_78 = L_33;
	const Il2CppFullySharedGenericAny L_93 = L_33;
	const Il2CppFullySharedGenericAny L_108 = L_33;
	const Il2CppFullySharedGenericAny L_123 = L_33;
	const Il2CppFullySharedGenericAny L_138 = L_33;
	const Il2CppFullySharedGenericAny L_153 = L_33;
	const Il2CppFullySharedGenericAny L_166 = L_33;
	const Il2CppFullySharedGenericAny L_183 = L_33;
	const Il2CppFullySharedGenericAny L_185 = L_33;
	const Il2CppFullySharedGenericAny L_201 = L_33;
	const Il2CppFullySharedGenericAny L_203 = L_33;
	const Il2CppFullySharedGenericAny L_216 = L_33;
	const Il2CppFullySharedGenericAny L_223 = L_33;
	const Il2CppFullySharedGenericAny L_224 = L_33;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_6, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppFullySharedGenericAny V_18 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_18, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B31_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B36_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_12;
		L_12 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_13, L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_043a:
			{
				intptr_t L_15;
				L_15 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_17, NULL);
				V_4 = L_18;
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_02c2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				bool L_24;
				L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_009f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
				intptr_t L_27;
				L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_26, NULL);
				intptr_t L_28 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_29 = V_0;
				int32_t L_30;
				L_30 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_27, L_28, L_29, NULL);
				int32_t L_31 = L_30;
				RuntimeObject* L_32 = Box(il2cpp_defaults.int32_class, &L_31);
				void* L_34 = UnBox_Any(L_32, il2cpp_rgctx_data(method->rgctx_data, 1), L_33);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_34)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_009f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
				Type_t* L_38;
				L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
				bool L_39;
				L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
				V_7 = L_39;
				bool L_40 = V_7;
				if (!L_40)
				{
					goto IL_00e1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jclass;
				intptr_t L_42;
				L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_41, NULL);
				intptr_t L_43 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_44 = V_0;
				bool L_45;
				L_45 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_42, L_43, L_44, NULL);
				bool L_46 = L_45;
				RuntimeObject* L_47 = Box(il2cpp_defaults.boolean_class, &L_46);
				void* L_49 = UnBox_Any(L_47, il2cpp_rgctx_data(method->rgctx_data, 1), L_48);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_49)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_00e1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_51;
				L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
				Type_t* L_53;
				L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
				bool L_54;
				L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
				V_8 = L_54;
				bool L_55 = V_8;
				if (!L_55)
				{
					goto IL_0130_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jclass;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int8_t L_60;
				L_60 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_57, L_58, L_59, NULL);
				uint8_t L_61 = ((uint8_t)((int32_t)(uint8_t)L_60));
				RuntimeObject* L_62 = Box(il2cpp_defaults.byte_class, &L_61);
				void* L_64 = UnBox_Any(L_62, il2cpp_rgctx_data(method->rgctx_data, 1), L_63);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_64)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_0130_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_66;
				L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				bool L_69;
				L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
				V_9 = L_69;
				bool L_70 = V_9;
				if (!L_70)
				{
					goto IL_0172_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_71 = __this->___m_jclass;
				intptr_t L_72;
				L_72 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_71, NULL);
				intptr_t L_73 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_74 = V_0;
				int8_t L_75;
				L_75 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_72, L_73, L_74, NULL);
				int8_t L_76 = L_75;
				RuntimeObject* L_77 = Box(il2cpp_defaults.sbyte_class, &L_76);
				void* L_79 = UnBox_Any(L_77, il2cpp_rgctx_data(method->rgctx_data, 1), L_78);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_79)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_0172_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_81;
				L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
				Type_t* L_83;
				L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
				bool L_84;
				L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
				V_10 = L_84;
				bool L_85 = V_10;
				if (!L_85)
				{
					goto IL_01b4_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jclass;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				int16_t L_90;
				L_90 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_87, L_88, L_89, NULL);
				int16_t L_91 = L_90;
				RuntimeObject* L_92 = Box(il2cpp_defaults.int16_class, &L_91);
				void* L_94 = UnBox_Any(L_92, il2cpp_rgctx_data(method->rgctx_data, 1), L_93);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_94)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_01b4_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_96;
				L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				bool L_99;
				L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
				V_11 = L_99;
				bool L_100 = V_11;
				if (!L_100)
				{
					goto IL_01f6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_101 = __this->___m_jclass;
				intptr_t L_102;
				L_102 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_101, NULL);
				intptr_t L_103 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_104 = V_0;
				int64_t L_105;
				L_105 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_102, L_103, L_104, NULL);
				int64_t L_106 = L_105;
				RuntimeObject* L_107 = Box(il2cpp_defaults.int64_class, &L_106);
				void* L_109 = UnBox_Any(L_107, il2cpp_rgctx_data(method->rgctx_data, 1), L_108);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_109)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_01f6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_12 = L_114;
				bool L_115 = V_12;
				if (!L_115)
				{
					goto IL_0238_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jclass;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				float L_120;
				L_120 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_117, L_118, L_119, NULL);
				float L_121 = L_120;
				RuntimeObject* L_122 = Box(il2cpp_defaults.single_class, &L_121);
				void* L_124 = UnBox_Any(L_122, il2cpp_rgctx_data(method->rgctx_data, 1), L_123);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_124)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_0238_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				bool L_129;
				L_129 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_126, L_128, NULL);
				V_13 = L_129;
				bool L_130 = V_13;
				if (!L_130)
				{
					goto IL_027a_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_131 = __this->___m_jclass;
				intptr_t L_132;
				L_132 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_131, NULL);
				intptr_t L_133 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_134 = V_0;
				double L_135;
				L_135 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_132, L_133, L_134, NULL);
				double L_136 = L_135;
				RuntimeObject* L_137 = Box(il2cpp_defaults.double_class, &L_136);
				void* L_139 = UnBox_Any(L_137, il2cpp_rgctx_data(method->rgctx_data, 1), L_138);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_139)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_027a_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_141;
				L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
				Type_t* L_143;
				L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
				bool L_144;
				L_144 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_141, L_143, NULL);
				V_14 = L_144;
				bool L_145 = V_14;
				if (!L_145)
				{
					goto IL_02bc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_146 = __this->___m_jclass;
				intptr_t L_147;
				L_147 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_146, NULL);
				intptr_t L_148 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_149 = V_0;
				Il2CppChar L_150;
				L_150 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_147, L_148, L_149, NULL);
				Il2CppChar L_151 = L_150;
				RuntimeObject* L_152 = Box(il2cpp_defaults.char_class, &L_151);
				void* L_154 = UnBox_Any(L_152, il2cpp_rgctx_data(method->rgctx_data, 1), L_153);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_154)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_02bc_1:
			{
				goto IL_042c_1;
			}

IL_02c2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_155 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_156;
				L_156 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_155, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_157 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
				Type_t* L_158;
				L_158 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_157, NULL);
				bool L_159;
				L_159 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_156, L_158, NULL);
				V_15 = L_159;
				bool L_160 = V_15;
				if (!L_160)
				{
					goto IL_02ff_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_161 = __this->___m_jclass;
				intptr_t L_162;
				L_162 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_161, NULL);
				intptr_t L_163 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_164 = V_0;
				String_t* L_165;
				L_165 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_162, L_163, L_164, NULL);
				void* L_167 = UnBox_Any((RuntimeObject*)L_165, il2cpp_rgctx_data(method->rgctx_data, 1), L_166);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_167)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_02ff_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_169;
				L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_171;
				L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
				bool L_172;
				L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
				V_16 = L_172;
				bool L_173 = V_16;
				if (!L_173)
				{
					goto IL_0360_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_174 = __this->___m_jclass;
				intptr_t L_175;
				L_175 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_174, NULL);
				intptr_t L_176 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_177 = V_0;
				intptr_t L_178;
				L_178 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_175, L_176, L_177, NULL);
				V_17 = L_178;
				intptr_t L_179 = V_17;
				bool L_180;
				L_180 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_179, 0, NULL);
				if (L_180)
				{
					goto IL_034f_1;
				}
			}
			{
				intptr_t L_181 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_182 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_182, L_181, NULL);
				void* L_184 = UnBox_Any((RuntimeObject*)L_182, il2cpp_rgctx_data(method->rgctx_data, 1), L_183);
				il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_184)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0359_1;
			}

IL_034f_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_185, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B31_0, L_185, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_0359_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B31_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_0360_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_186 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_187;
				L_187 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_186, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_189;
				L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
				bool L_190;
				L_190 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_187, L_189, NULL);
				V_19 = L_190;
				bool L_191 = V_19;
				if (!L_191)
				{
					goto IL_03c1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_192 = __this->___m_jclass;
				intptr_t L_193;
				L_193 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_192, NULL);
				intptr_t L_194 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_195 = V_0;
				intptr_t L_196;
				L_196 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_193, L_194, L_195, NULL);
				V_20 = L_196;
				intptr_t L_197 = V_20;
				bool L_198;
				L_198 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_197, 0, NULL);
				if (L_198)
				{
					goto IL_03b0_1;
				}
			}
			{
				intptr_t L_199 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_200 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_200, L_199, NULL);
				void* L_202 = UnBox_Any((RuntimeObject*)L_200, il2cpp_rgctx_data(method->rgctx_data, 1), L_201);
				il2cpp_codegen_memcpy(G_B36_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_202)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ba_1;
			}

IL_03b0_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_203, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B36_0, L_203, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_03ba_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B36_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_03c1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_205;
				L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_206 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_207;
				L_207 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_206, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_208;
				L_208 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_205, L_207, NULL);
				V_21 = L_208;
				bool L_209 = V_21;
				if (!L_209)
				{
					goto IL_0400_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_210 = __this->___m_jclass;
				intptr_t L_211;
				L_211 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_210, NULL);
				intptr_t L_212 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_213 = V_0;
				intptr_t L_214;
				L_214 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_211, L_212, L_213, NULL);
				V_22 = L_214;
				intptr_t L_215 = V_22;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_215, (Il2CppFullySharedGenericAny*)L_216);
				il2cpp_codegen_memcpy(V_6, L_216, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}

IL_0400_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_218;
				L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
				Type_t* L_219 = L_218;
				if (L_219)
				{
					G_B41_0 = L_219;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0417_1;
				}
				G_B40_0 = L_219;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_041c_1;
			}

IL_0417_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_220;
				L_220 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_220;
				G_B42_1 = G_B41_1;
			}

IL_041c_1:
			{
				String_t* L_221;
				L_221 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_222 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_222, L_221, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_222, method);
			}

IL_042c_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_223, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(V_6, L_223, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0448;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0448:
	{
		il2cpp_codegen_memcpy(L_224, V_6, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_224, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(V_1, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		goto IL_0020;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		V_2 = ((*(int32_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jobject;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.boolean_class, &L_26);
		V_2 = ((*(int32_t*)UnBox(L_27, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(il2cpp_defaults.byte_class, &L_38);
		V_2 = ((*(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.sbyte_class, &L_50);
		V_2 = ((*(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jobject;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_defaults.int16_class, &L_62);
		V_2 = ((*(int32_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_defaults.int64_class, &L_74);
		V_2 = ((*(int32_t*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_defaults.single_class, &L_86);
		V_2 = ((*(int32_t*)UnBox(L_87, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.double_class, &L_98);
		V_2 = ((*(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jobject;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(il2cpp_defaults.char_class, &L_110);
		V_2 = ((*(int32_t*)UnBox(L_111, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jobject;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_119, L_120, NULL);
		V_2 = ((*(int32_t*)UnBox((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jobject;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jobject;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		int32_t L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		int32_t L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m16AE597DA478C33ABF978BB8131126B5C7360D09_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	const Il2CppFullySharedGenericAny L_30 = L_16;
	const Il2CppFullySharedGenericAny L_44 = L_16;
	const Il2CppFullySharedGenericAny L_58 = L_16;
	const Il2CppFullySharedGenericAny L_72 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_100 = L_16;
	const Il2CppFullySharedGenericAny L_114 = L_16;
	const Il2CppFullySharedGenericAny L_128 = L_16;
	const Il2CppFullySharedGenericAny L_140 = L_16;
	const Il2CppFullySharedGenericAny L_156 = L_16;
	const Il2CppFullySharedGenericAny L_158 = L_16;
	const Il2CppFullySharedGenericAny L_173 = L_16;
	const Il2CppFullySharedGenericAny L_175 = L_16;
	const Il2CppFullySharedGenericAny L_187 = L_16;
	const Il2CppFullySharedGenericAny L_194 = L_16;
	const Il2CppFullySharedGenericAny L_195 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_2, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppFullySharedGenericAny V_14 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_14, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(G_B26_0, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(G_B31_0, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_24 = __this->___m_jobject;
		intptr_t L_25;
		L_25 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_24, NULL);
		intptr_t L_26 = ___0_fieldID;
		bool L_27;
		L_27 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_25, L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_defaults.boolean_class, &L_28);
		void* L_31 = UnBox_Any(L_29, il2cpp_rgctx_data(method->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_31)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
		intptr_t L_39;
		L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
		intptr_t L_40 = ___0_fieldID;
		int8_t L_41;
		L_41 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_39, L_40, NULL);
		uint8_t L_42 = ((uint8_t)((int32_t)(uint8_t)L_41));
		RuntimeObject* L_43 = Box(il2cpp_defaults.byte_class, &L_42);
		void* L_45 = UnBox_Any(L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		V_5 = L_50;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
		intptr_t L_54 = ___0_fieldID;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(il2cpp_defaults.sbyte_class, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 1), L_58);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_59)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_6 = L_64;
		bool L_65 = V_6;
		if (!L_65)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_66 = __this->___m_jobject;
		intptr_t L_67;
		L_67 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_66, NULL);
		intptr_t L_68 = ___0_fieldID;
		int16_t L_69;
		L_69 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_67, L_68, NULL);
		int16_t L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_defaults.int16_class, &L_70);
		void* L_73 = UnBox_Any(L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		V_7 = L_78;
		bool L_79 = V_7;
		if (!L_79)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_80 = __this->___m_jobject;
		intptr_t L_81;
		L_81 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_80, NULL);
		intptr_t L_82 = ___0_fieldID;
		int64_t L_83;
		L_83 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_81, L_82, NULL);
		int64_t L_84 = L_83;
		RuntimeObject* L_85 = Box(il2cpp_defaults.int64_class, &L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 1), L_86);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_8 = L_92;
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		float L_97;
		L_97 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_95, L_96, NULL);
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.single_class, &L_98);
		void* L_101 = UnBox_Any(L_99, il2cpp_rgctx_data(method->rgctx_data, 1), L_100);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_101)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		bool L_106;
		L_106 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_103, L_105, NULL);
		V_9 = L_106;
		bool L_107 = V_9;
		if (!L_107)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_108 = __this->___m_jobject;
		intptr_t L_109;
		L_109 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_108, NULL);
		intptr_t L_110 = ___0_fieldID;
		double L_111;
		L_111 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_109, L_110, NULL);
		double L_112 = L_111;
		RuntimeObject* L_113 = Box(il2cpp_defaults.double_class, &L_112);
		void* L_115 = UnBox_Any(L_113, il2cpp_rgctx_data(method->rgctx_data, 1), L_114);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_115)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		V_10 = L_120;
		bool L_121 = V_10;
		if (!L_121)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_122 = __this->___m_jobject;
		intptr_t L_123;
		L_123 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_122, NULL);
		intptr_t L_124 = ___0_fieldID;
		Il2CppChar L_125;
		L_125 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_123, L_124, NULL);
		Il2CppChar L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_defaults.char_class, &L_126);
		void* L_129 = UnBox_Any(L_127, il2cpp_rgctx_data(method->rgctx_data, 1), L_128);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_132 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_133;
		L_133 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_132, NULL);
		bool L_134;
		L_134 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_133, NULL);
		V_11 = L_134;
		bool L_135 = V_11;
		if (!L_135)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_136 = __this->___m_jobject;
		intptr_t L_137;
		L_137 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_136, NULL);
		intptr_t L_138 = ___0_fieldID;
		String_t* L_139;
		L_139 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_137, L_138, NULL);
		void* L_141 = UnBox_Any((RuntimeObject*)L_139, il2cpp_rgctx_data(method->rgctx_data, 1), L_140);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_141)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		bool L_146;
		L_146 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_145, NULL);
		V_12 = L_146;
		bool L_147 = V_12;
		if (!L_147)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_148 = __this->___m_jobject;
		intptr_t L_149;
		L_149 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_148, NULL);
		intptr_t L_150 = ___0_fieldID;
		intptr_t L_151;
		L_151 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_149, L_150, NULL);
		V_13 = L_151;
		intptr_t L_152 = V_13;
		bool L_153;
		L_153 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_152, 0, NULL);
		if (L_153)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_154 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_155;
		L_155 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_154, NULL);
		void* L_157 = UnBox_Any((RuntimeObject*)L_155, il2cpp_rgctx_data(method->rgctx_data, 1), L_156);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_157)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_158, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(G_B26_0, L_158, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	}

IL_02fb:
	{
		il2cpp_codegen_memcpy(V_2, G_B26_0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		V_15 = L_163;
		bool L_164 = V_15;
		if (!L_164)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_165 = __this->___m_jobject;
		intptr_t L_166;
		L_166 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_165, NULL);
		intptr_t L_167 = ___0_fieldID;
		intptr_t L_168;
		L_168 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_166, L_167, NULL);
		V_16 = L_168;
		intptr_t L_169 = V_16;
		bool L_170;
		L_170 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_169, 0, NULL);
		if (L_170)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_171 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_172;
		L_172 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_171, NULL);
		void* L_174 = UnBox_Any((RuntimeObject*)L_172, il2cpp_rgctx_data(method->rgctx_data, 1), L_173);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_174)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_175, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(G_B31_0, L_175, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	}

IL_035a:
	{
		il2cpp_codegen_memcpy(V_2, G_B31_0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_176 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_177;
		L_177 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_176, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_179;
		L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_180;
		L_180 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_177, L_179, NULL);
		V_17 = L_180;
		bool L_181 = V_17;
		if (!L_181)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_182 = __this->___m_jobject;
		intptr_t L_183;
		L_183 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_182, NULL);
		intptr_t L_184 = ___0_fieldID;
		intptr_t L_185;
		L_185 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_183, L_184, NULL);
		V_18 = L_185;
		intptr_t L_186 = V_18;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_186, (Il2CppFullySharedGenericAny*)L_187);
		il2cpp_codegen_memcpy(V_2, L_187, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		Type_t* L_190 = L_189;
		if (L_190)
		{
			G_B36_0 = L_190;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_190;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_191;
		L_191 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_191;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_192;
		L_192 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_193 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_193, L_192, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_193, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_194, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(V_2, L_194, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_03d3:
	{
		il2cpp_codegen_memcpy(L_195, V_2, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_195, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(V_1, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_001e;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jclass;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.boolean_class, &L_26);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(il2cpp_defaults.byte_class, &L_38);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jclass;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.sbyte_class, &L_50);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jclass;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_defaults.int16_class, &L_62);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_63, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_defaults.int64_class, &L_74);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_defaults.single_class, &L_86);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_87, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.double_class, &L_98);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jclass;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(il2cpp_defaults.char_class, &L_110);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_111, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jclass;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_119, L_120, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jclass;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jclass;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		RuntimeObject* L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		RuntimeObject* L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m265EB43F18C8FB22DCD571C5E50A76642369551D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	const Il2CppFullySharedGenericAny L_30 = L_16;
	const Il2CppFullySharedGenericAny L_44 = L_16;
	const Il2CppFullySharedGenericAny L_58 = L_16;
	const Il2CppFullySharedGenericAny L_72 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_100 = L_16;
	const Il2CppFullySharedGenericAny L_114 = L_16;
	const Il2CppFullySharedGenericAny L_128 = L_16;
	const Il2CppFullySharedGenericAny L_140 = L_16;
	const Il2CppFullySharedGenericAny L_156 = L_16;
	const Il2CppFullySharedGenericAny L_158 = L_16;
	const Il2CppFullySharedGenericAny L_173 = L_16;
	const Il2CppFullySharedGenericAny L_175 = L_16;
	const Il2CppFullySharedGenericAny L_187 = L_16;
	const Il2CppFullySharedGenericAny L_194 = L_16;
	const Il2CppFullySharedGenericAny L_195 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_2, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppFullySharedGenericAny V_14 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_14, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(G_B26_0, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(G_B31_0, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_24 = __this->___m_jclass;
		intptr_t L_25;
		L_25 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_24, NULL);
		intptr_t L_26 = ___0_fieldID;
		bool L_27;
		L_27 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_25, L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_defaults.boolean_class, &L_28);
		void* L_31 = UnBox_Any(L_29, il2cpp_rgctx_data(method->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_31)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jclass;
		intptr_t L_39;
		L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
		intptr_t L_40 = ___0_fieldID;
		int8_t L_41;
		L_41 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_39, L_40, NULL);
		uint8_t L_42 = ((uint8_t)((int32_t)(uint8_t)L_41));
		RuntimeObject* L_43 = Box(il2cpp_defaults.byte_class, &L_42);
		void* L_45 = UnBox_Any(L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		V_5 = L_50;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jclass;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
		intptr_t L_54 = ___0_fieldID;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(il2cpp_defaults.sbyte_class, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 1), L_58);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_59)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_6 = L_64;
		bool L_65 = V_6;
		if (!L_65)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_66 = __this->___m_jclass;
		intptr_t L_67;
		L_67 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_66, NULL);
		intptr_t L_68 = ___0_fieldID;
		int16_t L_69;
		L_69 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_67, L_68, NULL);
		int16_t L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_defaults.int16_class, &L_70);
		void* L_73 = UnBox_Any(L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		V_7 = L_78;
		bool L_79 = V_7;
		if (!L_79)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_80 = __this->___m_jclass;
		intptr_t L_81;
		L_81 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_80, NULL);
		intptr_t L_82 = ___0_fieldID;
		int64_t L_83;
		L_83 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_81, L_82, NULL);
		int64_t L_84 = L_83;
		RuntimeObject* L_85 = Box(il2cpp_defaults.int64_class, &L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 1), L_86);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_8 = L_92;
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		float L_97;
		L_97 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_95, L_96, NULL);
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.single_class, &L_98);
		void* L_101 = UnBox_Any(L_99, il2cpp_rgctx_data(method->rgctx_data, 1), L_100);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_101)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		bool L_106;
		L_106 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_103, L_105, NULL);
		V_9 = L_106;
		bool L_107 = V_9;
		if (!L_107)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_108 = __this->___m_jclass;
		intptr_t L_109;
		L_109 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_108, NULL);
		intptr_t L_110 = ___0_fieldID;
		double L_111;
		L_111 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_109, L_110, NULL);
		double L_112 = L_111;
		RuntimeObject* L_113 = Box(il2cpp_defaults.double_class, &L_112);
		void* L_115 = UnBox_Any(L_113, il2cpp_rgctx_data(method->rgctx_data, 1), L_114);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_115)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		V_10 = L_120;
		bool L_121 = V_10;
		if (!L_121)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_122 = __this->___m_jclass;
		intptr_t L_123;
		L_123 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_122, NULL);
		intptr_t L_124 = ___0_fieldID;
		Il2CppChar L_125;
		L_125 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_123, L_124, NULL);
		Il2CppChar L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_defaults.char_class, &L_126);
		void* L_129 = UnBox_Any(L_127, il2cpp_rgctx_data(method->rgctx_data, 1), L_128);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_132 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_133;
		L_133 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_132, NULL);
		bool L_134;
		L_134 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_133, NULL);
		V_11 = L_134;
		bool L_135 = V_11;
		if (!L_135)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_136 = __this->___m_jclass;
		intptr_t L_137;
		L_137 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_136, NULL);
		intptr_t L_138 = ___0_fieldID;
		String_t* L_139;
		L_139 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_137, L_138, NULL);
		void* L_141 = UnBox_Any((RuntimeObject*)L_139, il2cpp_rgctx_data(method->rgctx_data, 1), L_140);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_141)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		bool L_146;
		L_146 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_145, NULL);
		V_12 = L_146;
		bool L_147 = V_12;
		if (!L_147)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_148 = __this->___m_jclass;
		intptr_t L_149;
		L_149 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_148, NULL);
		intptr_t L_150 = ___0_fieldID;
		intptr_t L_151;
		L_151 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_149, L_150, NULL);
		V_13 = L_151;
		intptr_t L_152 = V_13;
		bool L_153;
		L_153 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_152, 0, NULL);
		if (L_153)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_154 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_155;
		L_155 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_154, NULL);
		void* L_157 = UnBox_Any((RuntimeObject*)L_155, il2cpp_rgctx_data(method->rgctx_data, 1), L_156);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_157)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_158, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(G_B26_0, L_158, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	}

IL_02fb:
	{
		il2cpp_codegen_memcpy(V_2, G_B26_0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		V_15 = L_163;
		bool L_164 = V_15;
		if (!L_164)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_165 = __this->___m_jclass;
		intptr_t L_166;
		L_166 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_165, NULL);
		intptr_t L_167 = ___0_fieldID;
		intptr_t L_168;
		L_168 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_166, L_167, NULL);
		V_16 = L_168;
		intptr_t L_169 = V_16;
		bool L_170;
		L_170 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_169, 0, NULL);
		if (L_170)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_171 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_172;
		L_172 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_171, NULL);
		void* L_174 = UnBox_Any((RuntimeObject*)L_172, il2cpp_rgctx_data(method->rgctx_data, 1), L_173);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_174)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_175, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(G_B31_0, L_175, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	}

IL_035a:
	{
		il2cpp_codegen_memcpy(V_2, G_B31_0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_176 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_177;
		L_177 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_176, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_179;
		L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_180;
		L_180 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_177, L_179, NULL);
		V_17 = L_180;
		bool L_181 = V_17;
		if (!L_181)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_182 = __this->___m_jclass;
		intptr_t L_183;
		L_183 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_182, NULL);
		intptr_t L_184 = ___0_fieldID;
		intptr_t L_185;
		L_185 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_183, L_184, NULL);
		V_18 = L_185;
		intptr_t L_186 = V_18;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_186, (Il2CppFullySharedGenericAny*)L_187);
		il2cpp_codegen_memcpy(V_2, L_187, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		Type_t* L_190 = L_189;
		if (L_190)
		{
			G_B36_0 = L_190;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_190;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_191;
		L_191 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_191;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_192;
		L_192 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_193 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_193, L_192, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_193, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_194, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(V_2, L_194, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_03d3:
	{
		il2cpp_codegen_memcpy(L_195, V_2, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_195, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	memset(V_1, 0, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		goto IL_001e;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m84E47B5A5FF416288BF85C7F79F287D6FD90356F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
	const Il2CppFullySharedGenericAny L_24 = L_13;
	const Il2CppFullySharedGenericAny L_35 = L_13;
	const Il2CppFullySharedGenericAny L_46 = L_13;
	const Il2CppFullySharedGenericAny L_57 = L_13;
	const Il2CppFullySharedGenericAny L_68 = L_13;
	const Il2CppFullySharedGenericAny L_79 = L_13;
	const Il2CppFullySharedGenericAny L_90 = L_13;
	const Il2CppFullySharedGenericAny L_101 = L_13;
	const Il2CppFullySharedGenericAny L_112 = L_13;
	const Il2CppFullySharedGenericAny L_123 = L_13;
	const Il2CppFullySharedGenericAny L_125 = L_13;
	const Il2CppFullySharedGenericAny L_138 = L_13;
	const Il2CppFullySharedGenericAny L_140 = L_13;
	const Il2CppFullySharedGenericAny L_153 = L_13;
	const Il2CppFullySharedGenericAny L_155 = L_13;
	const Il2CppFullySharedGenericAny L_164 = L_13;
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	intptr_t G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	intptr_t G_B26_2;
	memset((&G_B26_2), 0, sizeof(G_B26_2));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	intptr_t G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	intptr_t G_B31_2;
	memset((&G_B31_2), 0, sizeof(G_B31_2));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	intptr_t G_B36_1;
	memset((&G_B36_1), 0, sizeof(G_B36_1));
	intptr_t G_B36_2;
	memset((&G_B36_2), 0, sizeof(G_B36_2));
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_13);
		AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120(L_11, L_12, ((*(int32_t*)UnBox(L_14, il2cpp_defaults.int32_class))), NULL);
		goto IL_025e;
	}

IL_0057:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jobject;
		intptr_t L_22;
		L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_21, NULL);
		intptr_t L_23 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_24);
		AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E(L_22, L_23, ((*(bool*)UnBox(L_25, il2cpp_defaults.boolean_class))), NULL);
		goto IL_025e;
	}

IL_0096:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		V_3 = L_30;
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jobject;
		intptr_t L_33;
		L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_32, NULL);
		intptr_t L_34 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_35);
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_33, L_34, ((int8_t)((*(uint8_t*)UnBox(L_36, il2cpp_defaults.byte_class)))), NULL);
		goto IL_025e;
	}

IL_00e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		V_4 = L_41;
		bool L_42 = V_4;
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_43 = __this->___m_jobject;
		intptr_t L_44;
		L_44 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_43, NULL);
		intptr_t L_45 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_46);
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_44, L_45, ((*(int8_t*)UnBox(L_47, il2cpp_defaults.sbyte_class))), NULL);
		goto IL_025e;
	}

IL_0124:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		V_5 = L_52;
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_0165;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_57);
		AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D(L_55, L_56, ((*(int16_t*)UnBox(L_58, il2cpp_defaults.int16_class))), NULL);
		goto IL_025e;
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_6 = L_63;
		bool L_64 = V_6;
		if (!L_64)
		{
			goto IL_01a6;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35(L_66, L_67, ((*(int64_t*)UnBox(L_69, il2cpp_defaults.int64_class))), NULL);
		goto IL_025e;
	}

IL_01a6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_7 = L_74;
		bool L_75 = V_7;
		if (!L_75)
		{
			goto IL_01e4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_76 = __this->___m_jobject;
		intptr_t L_77;
		L_77 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_76, NULL);
		intptr_t L_78 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_79, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_79);
		AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3(L_77, L_78, ((*(float*)UnBox(L_80, il2cpp_defaults.single_class))), NULL);
		goto IL_025e;
	}

IL_01e4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		V_8 = L_85;
		bool L_86 = V_8;
		if (!L_86)
		{
			goto IL_0222;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_90, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_91 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_90);
		AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58(L_88, L_89, ((*(double*)UnBox(L_91, il2cpp_defaults.double_class))), NULL);
		goto IL_025e;
	}

IL_0222:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		V_9 = L_96;
		bool L_97 = V_9;
		if (!L_97)
		{
			goto IL_025e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_98 = __this->___m_jobject;
		intptr_t L_99;
		L_99 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_98, NULL);
		intptr_t L_100 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_101, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_101);
		AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9(L_99, L_100, ((*(Il2CppChar*)UnBox(L_102, il2cpp_defaults.char_class))), NULL);
	}

IL_025e:
	{
		goto IL_0428;
	}

IL_0264:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		bool L_107;
		L_107 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_104, L_106, NULL);
		V_10 = L_107;
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_109 = __this->___m_jobject;
		intptr_t L_110;
		L_110 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_109, NULL);
		intptr_t L_111 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_112, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_113 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_112);
		AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409(L_110, L_111, ((String_t*)CastclassSealed((RuntimeObject*)L_113, il2cpp_defaults.string_class)), NULL);
		goto IL_0428;
	}

IL_02a7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		V_11 = L_118;
		bool L_119 = V_11;
		if (!L_119)
		{
			goto IL_0303;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_120 = __this->___m_jobject;
		intptr_t L_121;
		L_121 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_120, NULL);
		intptr_t L_122 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_123, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_124 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_123);
		if (!L_124)
		{
			G_B25_0 = L_122;
			G_B25_1 = L_121;
			goto IL_02f2;
		}
		G_B24_0 = L_122;
		G_B24_1 = L_121;
	}
	{
		il2cpp_codegen_memcpy(L_125, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_126 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_125);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_126, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_127 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_126, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_128;
		L_128 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_127, NULL);
		G_B26_0 = L_128;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_02f7;
	}

IL_02f2:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_02f7:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B26_2, G_B26_1, G_B26_0, NULL);
		goto IL_0428;
	}

IL_0303:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		V_12 = L_133;
		bool L_134 = V_12;
		if (!L_134)
		{
			goto IL_035f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_135 = __this->___m_jobject;
		intptr_t L_136;
		L_136 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_135, NULL);
		intptr_t L_137 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_138, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_139 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_138);
		if (!L_139)
		{
			G_B30_0 = L_137;
			G_B30_1 = L_136;
			goto IL_034e;
		}
		G_B29_0 = L_137;
		G_B29_1 = L_136;
	}
	{
		il2cpp_codegen_memcpy(L_140, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_141 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_140);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_141, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_141, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_143;
		L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
		G_B31_0 = L_143;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		goto IL_0353;
	}

IL_034e:
	{
		G_B31_0 = 0;
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
	}

IL_0353:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B31_2, G_B31_1, G_B31_0, NULL);
		goto IL_0428;
	}

IL_035f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_148;
		L_148 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_145, L_147, NULL);
		V_13 = L_148;
		bool L_149 = V_13;
		if (!L_149)
		{
			goto IL_03b3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = __this->___m_jobject;
		intptr_t L_151;
		L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
		intptr_t L_152 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_153, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_154 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_153);
		if (!L_154)
		{
			G_B35_0 = L_152;
			G_B35_1 = L_151;
			goto IL_03a5;
		}
		G_B34_0 = L_152;
		G_B34_1 = L_151;
	}
	{
		il2cpp_codegen_memcpy(L_155, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_156 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_155);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_156, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_157;
		L_157 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_156, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B36_0 = L_157;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		goto IL_03aa;
	}

IL_03a5:
	{
		G_B36_0 = 0;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
	}

IL_03aa:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B36_2, G_B36_1, G_B36_0, NULL);
		goto IL_0428;
	}

IL_03b3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_158 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_159;
		L_159 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_158, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_160 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_161;
		L_161 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_160, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_162;
		L_162 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_159, L_161, NULL);
		V_14 = L_162;
		bool L_163 = V_14;
		if (!L_163)
		{
			goto IL_03fc;
		}
	}
	{
		il2cpp_codegen_memcpy(L_164, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_165 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_164);
		intptr_t L_166;
		L_166 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_165, il2cpp_defaults.array_class)), NULL);
		V_15 = L_166;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = __this->___m_jobject;
		intptr_t L_168;
		L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
		intptr_t L_169 = ___0_fieldID;
		intptr_t L_170 = V_15;
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(L_168, L_169, L_170, NULL);
		goto IL_0428;
	}

IL_03fc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		Type_t* L_173 = L_172;
		if (L_173)
		{
			G_B41_0 = L_173;
			G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0413;
		}
		G_B40_0 = L_173;
		G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		goto IL_0418;
	}

IL_0413:
	{
		NullCheck((RuntimeObject*)G_B41_0);
		String_t* L_174;
		L_174 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
		G_B42_0 = L_174;
		G_B42_1 = G_B41_1;
	}

IL_0418:
	{
		String_t* L_175;
		L_175 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_176 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_176, L_175, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_176, method);
	}

IL_0428:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_m07564225CF639F8502927F2D783809867A34367A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
	const Il2CppFullySharedGenericAny L_24 = L_13;
	const Il2CppFullySharedGenericAny L_35 = L_13;
	const Il2CppFullySharedGenericAny L_46 = L_13;
	const Il2CppFullySharedGenericAny L_57 = L_13;
	const Il2CppFullySharedGenericAny L_68 = L_13;
	const Il2CppFullySharedGenericAny L_79 = L_13;
	const Il2CppFullySharedGenericAny L_90 = L_13;
	const Il2CppFullySharedGenericAny L_101 = L_13;
	const Il2CppFullySharedGenericAny L_112 = L_13;
	const Il2CppFullySharedGenericAny L_123 = L_13;
	const Il2CppFullySharedGenericAny L_125 = L_13;
	const Il2CppFullySharedGenericAny L_138 = L_13;
	const Il2CppFullySharedGenericAny L_140 = L_13;
	const Il2CppFullySharedGenericAny L_153 = L_13;
	const Il2CppFullySharedGenericAny L_155 = L_13;
	const Il2CppFullySharedGenericAny L_164 = L_13;
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	intptr_t G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	intptr_t G_B26_2;
	memset((&G_B26_2), 0, sizeof(G_B26_2));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	intptr_t G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	intptr_t G_B31_2;
	memset((&G_B31_2), 0, sizeof(G_B31_2));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	intptr_t G_B36_1;
	memset((&G_B36_1), 0, sizeof(G_B36_1));
	intptr_t G_B36_2;
	memset((&G_B36_2), 0, sizeof(G_B36_2));
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_13);
		AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1(L_11, L_12, ((*(int32_t*)UnBox(L_14, il2cpp_defaults.int32_class))), NULL);
		goto IL_025e;
	}

IL_0057:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jclass;
		intptr_t L_22;
		L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_21, NULL);
		intptr_t L_23 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_24);
		AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9(L_22, L_23, ((*(bool*)UnBox(L_25, il2cpp_defaults.boolean_class))), NULL);
		goto IL_025e;
	}

IL_0096:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		V_3 = L_30;
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jclass;
		intptr_t L_33;
		L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_32, NULL);
		intptr_t L_34 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_35);
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_33, L_34, ((int8_t)((*(uint8_t*)UnBox(L_36, il2cpp_defaults.byte_class)))), NULL);
		goto IL_025e;
	}

IL_00e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		V_4 = L_41;
		bool L_42 = V_4;
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_43 = __this->___m_jclass;
		intptr_t L_44;
		L_44 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_43, NULL);
		intptr_t L_45 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_46);
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_44, L_45, ((*(int8_t*)UnBox(L_47, il2cpp_defaults.sbyte_class))), NULL);
		goto IL_025e;
	}

IL_0124:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		V_5 = L_52;
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_0165;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_57);
		AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81(L_55, L_56, ((*(int16_t*)UnBox(L_58, il2cpp_defaults.int16_class))), NULL);
		goto IL_025e;
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_6 = L_63;
		bool L_64 = V_6;
		if (!L_64)
		{
			goto IL_01a6;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E(L_66, L_67, ((*(int64_t*)UnBox(L_69, il2cpp_defaults.int64_class))), NULL);
		goto IL_025e;
	}

IL_01a6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_7 = L_74;
		bool L_75 = V_7;
		if (!L_75)
		{
			goto IL_01e4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_76 = __this->___m_jclass;
		intptr_t L_77;
		L_77 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_76, NULL);
		intptr_t L_78 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_79, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_79);
		AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE(L_77, L_78, ((*(float*)UnBox(L_80, il2cpp_defaults.single_class))), NULL);
		goto IL_025e;
	}

IL_01e4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		V_8 = L_85;
		bool L_86 = V_8;
		if (!L_86)
		{
			goto IL_0222;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_90, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_91 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_90);
		AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956(L_88, L_89, ((*(double*)UnBox(L_91, il2cpp_defaults.double_class))), NULL);
		goto IL_025e;
	}

IL_0222:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		V_9 = L_96;
		bool L_97 = V_9;
		if (!L_97)
		{
			goto IL_025e;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_98 = __this->___m_jclass;
		intptr_t L_99;
		L_99 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_98, NULL);
		intptr_t L_100 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_101, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_101);
		AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613(L_99, L_100, ((*(Il2CppChar*)UnBox(L_102, il2cpp_defaults.char_class))), NULL);
	}

IL_025e:
	{
		goto IL_0426;
	}

IL_0264:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		bool L_107;
		L_107 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_104, L_106, NULL);
		V_10 = L_107;
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a5;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_109 = __this->___m_jclass;
		intptr_t L_110;
		L_110 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_109, NULL);
		intptr_t L_111 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_112, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_113 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_112);
		AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE(L_110, L_111, ((String_t*)CastclassSealed((RuntimeObject*)L_113, il2cpp_defaults.string_class)), NULL);
		goto IL_0426;
	}

IL_02a5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		V_11 = L_118;
		bool L_119 = V_11;
		if (!L_119)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_120 = __this->___m_jclass;
		intptr_t L_121;
		L_121 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_120, NULL);
		intptr_t L_122 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_123, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_124 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_123);
		if (!L_124)
		{
			G_B25_0 = L_122;
			G_B25_1 = L_121;
			goto IL_02f0;
		}
		G_B24_0 = L_122;
		G_B24_1 = L_121;
	}
	{
		il2cpp_codegen_memcpy(L_125, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_126 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_125);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_126, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_127 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_126, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_128;
		L_128 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_127, NULL);
		G_B26_0 = L_128;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_02f5;
	}

IL_02f0:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_02f5:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B26_2, G_B26_1, G_B26_0, NULL);
		goto IL_0426;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		V_12 = L_133;
		bool L_134 = V_12;
		if (!L_134)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_135 = __this->___m_jclass;
		intptr_t L_136;
		L_136 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_135, NULL);
		intptr_t L_137 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_138, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_139 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_138);
		if (!L_139)
		{
			G_B30_0 = L_137;
			G_B30_1 = L_136;
			goto IL_034c;
		}
		G_B29_0 = L_137;
		G_B29_1 = L_136;
	}
	{
		il2cpp_codegen_memcpy(L_140, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_141 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_140);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_141, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_141, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_143;
		L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
		G_B31_0 = L_143;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		goto IL_0351;
	}

IL_034c:
	{
		G_B31_0 = 0;
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
	}

IL_0351:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B31_2, G_B31_1, G_B31_0, NULL);
		goto IL_0426;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_148;
		L_148 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_145, L_147, NULL);
		V_13 = L_148;
		bool L_149 = V_13;
		if (!L_149)
		{
			goto IL_03b1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = __this->___m_jclass;
		intptr_t L_151;
		L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
		intptr_t L_152 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_153, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_154 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_153);
		if (!L_154)
		{
			G_B35_0 = L_152;
			G_B35_1 = L_151;
			goto IL_03a3;
		}
		G_B34_0 = L_152;
		G_B34_1 = L_151;
	}
	{
		il2cpp_codegen_memcpy(L_155, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_156 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_155);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_156, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_157;
		L_157 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_156, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B36_0 = L_157;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		goto IL_03a8;
	}

IL_03a3:
	{
		G_B36_0 = 0;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
	}

IL_03a8:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B36_2, G_B36_1, G_B36_0, NULL);
		goto IL_0426;
	}

IL_03b1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_158 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_159;
		L_159 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_158, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_160 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_161;
		L_161 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_160, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_162;
		L_162 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_159, L_161, NULL);
		V_14 = L_162;
		bool L_163 = V_14;
		if (!L_163)
		{
			goto IL_03fa;
		}
	}
	{
		il2cpp_codegen_memcpy(L_164, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_165 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_164);
		intptr_t L_166;
		L_166 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_165, il2cpp_defaults.array_class)), NULL);
		V_15 = L_166;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = __this->___m_jclass;
		intptr_t L_168;
		L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
		intptr_t L_169 = ___0_fieldID;
		intptr_t L_170 = V_15;
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(L_168, L_169, L_170, NULL);
		goto IL_0426;
	}

IL_03fa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		Type_t* L_173 = L_172;
		if (L_173)
		{
			G_B41_0 = L_173;
			G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0411;
		}
		G_B40_0 = L_173;
		G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		goto IL_0416;
	}

IL_0411:
	{
		NullCheck((RuntimeObject*)G_B41_0);
		String_t* L_174;
		L_174 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
		G_B42_0 = L_174;
		G_B42_1 = G_B41_1;
	}

IL_0416:
	{
		String_t* L_175;
		L_175 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_176 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_176, L_175, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_176, method);
	}

IL_0426:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* Array_AsReadOnly_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD88B0D043B3113058F0A90CB78BB75E6716BE17A_gshared (CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_2 = ___0_array;
		ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* L_3 = (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* Array_AsReadOnly_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_mC945FB68604FAA2CFA7F469D9D420F3F2830F037_gshared (CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_2 = ___0_array;
		ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* L_3 = (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* Array_AsReadOnly_TisRuntimeObject_m1FC9160078A876124AF94842F1A13BF993F46E44_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_3 = (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mC6D4C312AF13E636588C50683CC2F2054B6298A4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_3 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCA6AA8E08561CD273B57726185CFB10006073270_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, uint64_t ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_array;
		NullCheck(L_3);
		uint64_t L_4 = ___1_value;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_mD7255DC86A3D47AD46661F249A70FB7D7FA0673C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
		int32_t L_5;
		L_5 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_4: *(void**)L_4), (RuntimeObject*)NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_mE25EE59ABB20AC401C5EC394D3A4497C9BA27C9D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_array;
		NullCheck(L_3);
		RuntimeObject* L_4 = ___1_value;
		RuntimeObject* L_5 = ___2_comparer;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisRuntimeObject_m5B818220FAB53B22E61917AC1A8AE36C1B1DA151(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m7E39322AE8312F6EB3768EE8329A0236270DB35B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
		RuntimeObject* L_5 = ___2_comparer;
		int32_t L_6;
		L_6 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_4: *(void**)L_4), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m41E7B9D01239068411C6C8644D275AD08C1BEBF1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
		int32_t L_4;
		L_4 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (RuntimeObject*)NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_m42970260FF15CCCFD596EF47931CFFBDCBC5AD31_gshared (ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* L_10;
		L_10 = ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisItem_t68017D36B9F921654433B5577F16E84594B8030B_m47C49D0B19184933668615FEB71350AA536CDC30_gshared (ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t68017D36B9F921654433B5577F16E84594B8030B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* L_10;
		L_10 = ArraySortHelper_1_get_Default_m6BA01E79B5B27D206C51F5E56B36811B7896B009_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		ItemU5BU5D_t31C41FB3E0D3274227403A9672098553C8A92258* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		Item_t68017D36B9F921654433B5577F16E84594B8030B L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m520EC7BDDCCC180851C0C785EEC811F55B8B06AC(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_mD29E1C54B2CDFA1DE852E1DE8CFD9270A75EF86D_gshared (KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* L_10;
		L_10 = ArraySortHelper_1_get_Default_mDD5D0B16EB2A2C278BE0F9244B26EE1E701D9102_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_mB2E909573942781DC38C9F90C39A472725B0DF50(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B_mB3D47B823262E60ADBBF5321362165EAA2A3EE31_gshared (KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* L_10;
		L_10 = ArraySortHelper_1_get_Default_m918C9D40E83F414DDB1232A61EE286EFB330D87B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t744F484D1E4FCF67CEF020E3C1D29CE675C61C77* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		KeyValuePair_2_tE12E61FE394738C9CF9108F8529389CDB296F77B L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m2C9D515B4A34DE9B2A32E4EF64D98EEBFF391EED(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423_m0B2A256CBB4BA50A8AD06D6323D0FE0565C984A0_gshared (KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* L_10;
		L_10 = ArraySortHelper_1_get_Default_mD14C7264E9F94299E44FF82A2A04A3EDFA8C818B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m5D35FE2D3F8E9252756BE0B25625D108F87D9F48(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m9DD01E1998BBCDB3117650C9B39079F6093E69E0_gshared (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* L_10;
		L_10 = ArraySortHelper_1_get_Default_mB15F67B355576D0D8B2C59CC953654D5D691B43C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m98C7CA2BEA4A01A2FA981E5A6BA3E22BF855325F(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C_m1DEB045A76F5CF2A52EBDE71CC9527C4C10D92B0_gshared (KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* L_10;
		L_10 = ArraySortHelper_1_get_Default_mF9C64F5E5D08A42BE9CAFA6F0CA5EC508CCE4A15_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m38BFB3C324F1B5B2B743554A592163FC278DA81D(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3_m481B8E516F90C7A4C23366317AC48A4393881823_gshared (NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_10;
		L_10 = ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD_mF453AF278D2C23F640FB922674C075E4F077F055_gshared (NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_10;
		L_10 = ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149_m41DCAA26B2CB6B00D46277B297CC2A4C5BC0A01F_gshared (NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_10;
		L_10 = ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57_m01F500A9F142CF2C3C80D2AFEB24DD1FA38C74D9_gshared (NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_10;
		L_10 = ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B_m9F3575CAC103B8F7B9E551F9A8BF4EC0DEB7E1B5_gshared (NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* L_10;
		L_10 = ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0_m63A28D9DFB48936C5DC6A9CEB3360F1D8D0BC86C_gshared (NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* L_10;
		L_10 = ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882_mF72CBF312DB31821D615D5FA0CE1C9CBEA8790E5_gshared (NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* L_10;
		L_10 = ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = ___2_length;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_14 = ___3_value;
		RuntimeObject* L_15 = ___4_comparer;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E(L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___Index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* L_0 = ((ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* ArraySortHelper_1_get_Default_m6BA01E79B5B27D206C51F5E56B36811B7896B009_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C* L_0 = ((ArraySortHelper_1_tAD686E335627946686A0193008AA947183287B0C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* ArraySortHelper_1_get_Default_mDD5D0B16EB2A2C278BE0F9244B26EE1E701D9102_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E* L_0 = ((ArraySortHelper_1_tDC674EC55CF09AF0E3CF14B18C93E4B613F1668E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* ArraySortHelper_1_get_Default_m918C9D40E83F414DDB1232A61EE286EFB330D87B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E* L_0 = ((ArraySortHelper_1_tBAF874A58AC9FA4645E473FA8427B5D6E43ED21E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* ArraySortHelper_1_get_Default_mD14C7264E9F94299E44FF82A2A04A3EDFA8C818B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9* L_0 = ((ArraySortHelper_1_t31E3D1487EFE148794FCA873BC439BACDACD57A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* ArraySortHelper_1_get_Default_mB15F67B355576D0D8B2C59CC953654D5D691B43C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7* L_0 = ((ArraySortHelper_1_tE590ACA1FBED35D97DF08D4373F955AAB0D2A8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* ArraySortHelper_1_get_Default_mF9C64F5E5D08A42BE9CAFA6F0CA5EC508CCE4A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA* L_0 = ((ArraySortHelper_1_tC18251EBBB469269D6383BE043F55959E2C30ACA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_0 = ((ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_0 = ((ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_0 = ((ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_0 = ((ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* L_0 = ((ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* L_0 = ((ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* L_0 = ((ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
