// Object: JobAffinitySettings
// ClassId: 4993
// RuntimeId: 8555
// TypeInfo: 0x0000000144BE84F0
#include "../Core/SystemSettings.h"
#include "../Core/JobAffinitySet.h"

#pragma pack(push, 8)
namespace Core {
    class JobAffinitySettings : public Core::SystemSettings {
        Core::JobAffinitySet ClientIdle; // 0x20
        Core::JobAffinitySet ClientUpdateRenderer; // 0x3E
        Core::JobAffinitySet ClientUpdateGame; // 0x5C
        Core::JobAffinitySet ClientSimAsync; // 0x7A
        Core::JobAffinitySet ClientAntAsync; // 0x98
        Core::JobAffinitySet ClientPhysicsAsync; // 0xB6
        char pad_0xD4[0x4];
    }; // 0xD8
    static_assert(sizeof(JobAffinitySettings) == 0xD8);
}
#pragma pack(pop)