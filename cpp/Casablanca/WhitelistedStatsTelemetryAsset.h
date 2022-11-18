// Object: WhitelistedStatsTelemetryAsset
// ClassId: 915
// RuntimeId: 64415
// TypeInfo: 0x0000000144C311F0
#include "../Core/Asset.h"
#include "../Casablanca/WhitelistedStatData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WhitelistedStatsTelemetryAsset : public Core::Asset {
        Array<Casablanca::WhitelistedStatData> WhitelistedStats; // 0x20
    }; // 0x28
    static_assert(sizeof(WhitelistedStatsTelemetryAsset) == 0x28);
}
#pragma pack(pop)