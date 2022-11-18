// Object: FootPlantLevelDescriptionComponent
// ClassId: 4211
// RuntimeId: 27705
// TypeInfo: 0x0000000144C1D300
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FootPlantLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Boolean Enabled; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(FootPlantLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)