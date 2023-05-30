#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// AppodealStack.Monetization.Common.IAppodealAdsClient
struct IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62;
// AppodealStack.Monetization.Common.IAppodealInitializationListener
struct IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1BAA6B58D71956BDC19BB67A40E2BC74FAD0D8FA 
{
};

// AppodealStack.Monetization.Api.Appodeal
struct Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Void
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

// <Module>

// <Module>

// AppodealStack.Monetization.Api.Appodeal
struct Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_StaticFields
{
	// AppodealStack.Monetization.Common.IAppodealAdsClient AppodealStack.Monetization.Api.Appodeal::_client
	RuntimeObject* ____client_0;
};

// AppodealStack.Monetization.Api.Appodeal

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// AppodealStack.Monetization.Common.IAppodealAdsClient AppodealStack.Monetization.Platforms.AppodealAdsClientFactory::GetAppodealAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppodealAdsClientFactory_GetAppodealAdsClient_mB434B90A57E674F0A4A9013E87ADD47DA6C09A78 (const RuntimeMethod* method) ;
// AppodealStack.Monetization.Common.IAppodealAdsClient AppodealStack.Monetization.Api.Appodeal::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// AppodealStack.Monetization.Common.IAppodealAdsClient AppodealStack.Monetization.Api.Appodeal::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return _client ?? (_client = AppodealAdsClientFactory.GetAppodealAdsClient());
		RuntimeObject* L_0 = ((Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_StaticFields*)il2cpp_codegen_static_fields_for(Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_il2cpp_TypeInfo_var))->____client_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AppodealAdsClientFactory_GetAppodealAdsClient_mB434B90A57E674F0A4A9013E87ADD47DA6C09A78(NULL);
		RuntimeObject* L_3 = L_2;
		((Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_StaticFields*)il2cpp_codegen_static_fields_for(Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_il2cpp_TypeInfo_var))->____client_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_StaticFields*)il2cpp_codegen_static_fields_for(Appodeal_t2542C1D0C15730258096BA7B86A5F5D379FDF53E_il2cpp_TypeInfo_var))->____client_0), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.Void AppodealStack.Monetization.Api.Appodeal::Initialize(System.String,System.Int32,AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appodeal_Initialize_m1C96EEAD1246DC0EDAD1BE63AB8EE2F51FCAE48A (String_t* ___0_appKey, int32_t ___1_adTypes, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetInstance().Initialize(appKey, adTypes, listener);
		RuntimeObject* L_0;
		L_0 = Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199(NULL);
		String_t* L_1 = ___0_appKey;
		int32_t L_2 = ___1_adTypes;
		RuntimeObject* L_3 = ___2_listener;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int32_t, RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.Monetization.Common.IAppodealAdsClient::Initialize(System.String,System.Int32,AppodealStack.Monetization.Common.IAppodealInitializationListener) */, IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean AppodealStack.Monetization.Api.Appodeal::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Appodeal_Show_m7C3001E77E7F76107494053AE07CF886685753AB (int32_t ___0_showStyle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetInstance().Show(showStyle);
		RuntimeObject* L_0;
		L_0 = Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199(NULL);
		int32_t L_1 = ___0_showStyle;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean AppodealStack.Monetization.Common.IAppodealAdsClient::Show(System.Int32) */, IAppodealAdsClient_t1EE670F0ABFAE02E8332F1CBA3BD0691743BAA62_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
