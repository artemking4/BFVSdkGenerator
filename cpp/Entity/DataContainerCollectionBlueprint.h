// Object: DataContainerCollectionBlueprint
// ClassId: 250
// RuntimeId: 59376
// TypeInfo: 0x0000000144ED7BF0
#include "../Entity/Blueprint.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Entity {
    class DataContainerCollectionBlueprint : public Entity::Blueprint {
        Array<Core::DataContainer> DataContainers; // 0x48
    }; // 0x50
    static_assert(sizeof(DataContainerCollectionBlueprint) == 0x50);
}
#pragma pack(pop)