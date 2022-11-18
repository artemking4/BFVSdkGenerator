// Object: TwinkleUISettings
// ClassId: 5034
// RuntimeId: 18288
// TypeInfo: 0x0000000144F669D0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../TwinkleShared/TwinkleStaticBundlesAsset.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleUISettings : public Core::SystemSettings {
        CString JsHost; // 0x20
        CString JsBundle; // 0x28
        CString JsBundleProtocol; // 0x30
        CString ScriptEngineBackend; // 0x38
        Float32 SuspendLingeringTimeout; // 0x40
        char pad_0x44[0x4];
        CString TwinkleWidgetPath; // 0x48
        CString TwinkleScreenPath; // 0x50
        CString TwinkleVideosSuperBundleAssetPath; // 0x58
        CString TwinkleVideosBundleAssetPath; // 0x60
        Uint32 MaxTexturePackingWidth; // 0x68
        Uint32 MaxTexturePackingHeight; // 0x6C
        Uint32 DynamicAtlasSize; // 0x70
        Uint32 StaticAtlasSize; // 0x74
        Uint32 MaxSingleTexturesNum; // 0x78
        Float32 DebugMemoryBudgetFrontEnd; // 0x7C
        Float32 DebugMemoryBudgetInGame; // 0x80
        char pad_0x84[0x4];
        TwinkleShared::TwinkleStaticBundlesAsset StaticBundle; // 0x88
        Boolean Enabled; // 0x90
        Boolean UseTwinkleOverlay; // 0x91
        Boolean OperationsGlobeLogicEnabled; // 0x92
        Boolean ResizeRootSurfaceToScreen; // 0x93
        Boolean UseManifestBundle; // 0x94
        Boolean HttpCacheEnabled; // 0x95
        Boolean HttpCacheWritesEnabled; // 0x96
        Boolean EnableInputConceptsForJS; // 0x97
        Boolean EnableTwinkleSpecificInputConceptsForJS; // 0x98
        Boolean DisableTextureLoading; // 0x99
        Boolean DisableFontLoading; // 0x9A
        char pad_0x9B[0x5];
    }; // 0xA0
    static_assert(sizeof(TwinkleUISettings) == 0xA0);
}
#pragma pack(pop)