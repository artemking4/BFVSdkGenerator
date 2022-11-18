// Object: AutoPlayDBContainerLoaderEntityData
// ClassId: 2074
// RuntimeId: 42431
// TypeInfo: 0x0000000144DBBA00
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/AutoPlaySequenceContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AutoPlayDBContainerLoaderEntityData : public Entity::EntityData {
        DiceCommonsShared::AutoPlaySequenceContainer ContainerToLoad; // 0x20
        Boolean LoadOnStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AutoPlayDBContainerLoaderEntityData) == 0x30);
}
#pragma pack(pop)