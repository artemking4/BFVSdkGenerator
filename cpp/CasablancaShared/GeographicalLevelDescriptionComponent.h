// Object: GeographicalLevelDescriptionComponent
// ClassId: 4212
// RuntimeId: 54908
// TypeInfo: 0x0000000144D2A8A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../CasablancaShared/GeographicalData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GeographicalLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CasablancaShared::GeographicalData GeographicalData; // 0x18
    }; // 0x20
    static_assert(sizeof(GeographicalLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)