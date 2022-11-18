// Object: CustomizationLevelDescriptionComponent
// ClassId: 4210
// RuntimeId: 35993
// TypeInfo: 0x0000000144DB6110
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CustomizationLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Array<CString> Tags; // 0x18
    }; // 0x20
    static_assert(sizeof(CustomizationLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)