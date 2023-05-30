#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 AppodealStack.Monetization.Common.IAppodealAdsClient AppodealStack.Monetization.Api.Appodeal::GetInstance()
extern void Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199 (void);
// 0x00000002 System.Void AppodealStack.Monetization.Api.Appodeal::Initialize(System.String,System.Int32,AppodealStack.Monetization.Common.IAppodealInitializationListener)
extern void Appodeal_Initialize_m1C96EEAD1246DC0EDAD1BE63AB8EE2F51FCAE48A (void);
// 0x00000003 System.Boolean AppodealStack.Monetization.Api.Appodeal::Show(System.Int32)
extern void Appodeal_Show_m7C3001E77E7F76107494053AE07CF886685753AB (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	Appodeal_GetInstance_m7C98D67AFEC0BB1763F5FF403734633D498BD199,
	Appodeal_Initialize_m1C96EEAD1246DC0EDAD1BE63AB8EE2F51FCAE48A,
	Appodeal_Show_m7C3001E77E7F76107494053AE07CF886685753AB,
};
static const int32_t s_InvokerIndices[3] = 
{
	4449,
	3341,
	3994,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AppodealStack_Monetization_Api_CodeGenModule;
const Il2CppCodeGenModule g_AppodealStack_Monetization_Api_CodeGenModule = 
{
	"AppodealStack.Monetization.Api.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
