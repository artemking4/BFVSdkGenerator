// Object: PersistenceSettings
// ClassId: 5009
// RuntimeId: 5400
// TypeInfo: 0x0000000144DC9CC0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceSettings : public Core::SystemSettings {
        Float32 ScoringMultiplier; // 0x20
        Boolean EnableStatEvents; // 0x24
        Boolean ThrottleStatStream; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(PersistenceSettings) == 0x28);
}
#pragma pack(pop)