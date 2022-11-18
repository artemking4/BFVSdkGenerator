// Object: BFPersistenceConfigurationLevelDescriptionComponent
// ClassId: 4209
// RuntimeId: 27032
// TypeInfo: 0x0000000144D2A420
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFPersistenceConfigurationLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Guid PersistencePartition; // 0x18
    }; // 0x28
    static_assert(sizeof(BFPersistenceConfigurationLevelDescriptionComponent) == 0x28);
}
#pragma pack(pop)