// Object: EntityInteractionComponentData
// ClassId: 1768
// RuntimeId: 4050
// TypeInfo: 0x0000000144C7D780
#include "../Entity/GameComponentData.h"
#include "../Casablanca/InteractionData.h"
#include "../MotionMachineShared/BoolChannelData.h"

#pragma pack(push, 16)
namespace Casablanca {
    class EntityInteractionComponentData : public Entity::GameComponentData {
        Array<Casablanca::InteractionData> Interactions; // 0x80
        MotionMachineShared::BoolChannelData IsInteracting; // 0x88
        MotionMachineShared::BoolChannelData IsInteractingAndSameAsReload; // 0x90
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(EntityInteractionComponentData) == 0xA0);
}
#pragma pack(pop)