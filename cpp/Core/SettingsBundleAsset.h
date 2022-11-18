// Object: SettingsBundleAsset
// ClassId: 728
// RuntimeId: 1755
// TypeInfo: 0x0000000144BE8A70
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Core/SystemSettings.h"

#pragma pack(push, 8)
namespace Core {
    class SettingsBundleAsset : public Core::Asset {
        Array<Core::SystemSettings> Settings; // 0x20
        Boolean IsDedicatedServerBundle; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SettingsBundleAsset) == 0x30);
}
#pragma pack(pop)