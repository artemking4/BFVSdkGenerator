// Object: BFInputRestrictionEntityData
// ClassId: 2100
// RuntimeId: 50827
// TypeInfo: 0x0000000144C32AF0
#include "../Entity/EntityData.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFInputRestrictionEntityData : public Entity::EntityData {
        Array<GameShared::InputConceptIdentifiers> InputConcepts; // 0x20
    }; // 0x28
    static_assert(sizeof(BFInputRestrictionEntityData) == 0x28);
}
#pragma pack(pop)