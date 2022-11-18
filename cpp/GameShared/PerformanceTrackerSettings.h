// Object: PerformanceTrackerSettings
// ClassId: 5008
// RuntimeId: 47935
// TypeInfo: 0x0000000144E6D050
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class PerformanceTrackerSettings : public Core::SystemSettings {
        Float32 Interval; // 0x20
        Boolean Enabled; // 0x24
        Boolean SupressPerformanceStatsOnIdle; // 0x25
        Boolean SupressPerformanceStatsUntilSpawned; // 0x26
        Boolean JuiceLogPerformance; // 0x27
    }; // 0x28
    static_assert(sizeof(PerformanceTrackerSettings) == 0x28);
}
#pragma pack(pop)