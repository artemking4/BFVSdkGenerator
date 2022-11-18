// Object: TreadMarksLevelDescriptionComponent
// ClassId: 4219
// RuntimeId: 1131
// TypeInfo: 0x0000000144D30B20
#include "../GameShared/LevelDescriptionComponent.h"
#include "../CasablancaShared/BFTreadMarkTemplate.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TreadMarksLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CasablancaShared::BFTreadMarkTemplate TreadMark; // 0x18
    }; // 0x20
    static_assert(sizeof(TreadMarksLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)