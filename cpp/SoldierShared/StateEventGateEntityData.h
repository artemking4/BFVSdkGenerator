// Object: StateEventGateEntityData
// ClassId: 3521
// RuntimeId: 43573
// TypeInfo: 0x0000000144F45A30
#include "../Entity/EntityData.h"
#include "../SoldierShared/EventGateState.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class StateEventGateEntityData : public Entity::EntityData {
        SoldierShared::EventGateState CheckedState; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(StateEventGateEntityData) == 0x28);
}
#pragma pack(pop)