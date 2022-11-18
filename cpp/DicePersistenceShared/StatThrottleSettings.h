// Object: StatThrottleSettings
// ClassId: 763
// RuntimeId: 54540
// TypeInfo: 0x0000000144DC9EC0
#include "../Core/Asset.h"
#include "../DicePersistenceShared/StatRateLimit.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatThrottleSettings : public Core::Asset {
        Array<DicePersistenceShared::StatRateLimit> StatRateLimits; // 0x20
    }; // 0x28
    static_assert(sizeof(StatThrottleSettings) == 0x28);
}
#pragma pack(pop)