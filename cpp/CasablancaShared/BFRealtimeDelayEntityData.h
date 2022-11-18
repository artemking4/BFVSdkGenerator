// Object: BFRealtimeDelayEntityData
// ClassId: 2114
// RuntimeId: 1683
// TypeInfo: 0x0000000144D201F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRealtimeDelayEntityData : public Entity::EntityData {
        Float32 Delay; // 0x20
        Core::Realm Realm; // 0x24
        Entity::TimeDeltaType TimeDeltaType; // 0x28
        Boolean UseRealTimeClock; // 0x2C
        Boolean AutoStart; // 0x2D
        Boolean RunOnce; // 0x2E
        Boolean RemoveDuplicateEvents; // 0x2F
    }; // 0x30
    static_assert(sizeof(BFRealtimeDelayEntityData) == 0x30);
}
#pragma pack(pop)