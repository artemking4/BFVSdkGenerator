// Object: OnlineServicesAsset
// ClassId: 611
// RuntimeId: 34053
// TypeInfo: 0x0000000144F02A90
#include "../Core/Asset.h"
#include "../Online/PresenceServiceData.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineServicesAsset : public Core::Asset {
        Array<Online::PresenceServiceData> OnlineServices; // 0x20
    }; // 0x28
    static_assert(sizeof(OnlineServicesAsset) == 0x28);
}
#pragma pack(pop)