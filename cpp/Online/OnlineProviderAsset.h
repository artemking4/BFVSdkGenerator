// Object: OnlineProviderAsset
// ClassId: 608
// RuntimeId: 61589
// TypeInfo: 0x0000000144F03210
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Online/PlatformBinding.h"
#include "../Online/PlatformOnlineProviderConfiguration.h"
#include "../Online/OnlineProviderConfiguration.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineProviderAsset : public Core::Asset {
        CString Client; // 0x20
        Uint32 ServerSocketPacketSize; // 0x28
        char pad_0x2C[0x4];
        Array<Online::PlatformBinding> PlatformBindings; // 0x30
        Array<Online::PlatformOnlineProviderConfiguration> Configurations; // 0x38
        Online::OnlineProviderConfiguration DefaultConfiguration; // 0x40
    }; // 0x60
    static_assert(sizeof(OnlineProviderAsset) == 0x60);
}
#pragma pack(pop)