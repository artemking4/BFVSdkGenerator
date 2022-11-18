// Object: CustomizationEntityData
// ClassId: 2564
// RuntimeId: 4168
// TypeInfo: 0x0000000144D02A20
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockContainer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CustomizationEntityData : public Entity::EntityData {
        GameShared::UnlockContainer ResolvedUnlockContainer; // 0x20
    }; // 0x28
    static_assert(sizeof(CustomizationEntityData) == 0x28);
}
#pragma pack(pop)