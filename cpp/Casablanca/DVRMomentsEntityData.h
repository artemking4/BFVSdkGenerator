// Object: DVRMomentsEntityData
// ClassId: 2571
// RuntimeId: 50616
// TypeInfo: 0x0000000144C1D500
#include "../Entity/EntityData.h"
#include "../Casablanca/DVRMomentEvent.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DVRMomentsEntityData : public Entity::EntityData {
        Array<Casablanca::DVRMomentEvent> Moments; // 0x20
    }; // 0x28
    static_assert(sizeof(DVRMomentsEntityData) == 0x28);
}
#pragma pack(pop)