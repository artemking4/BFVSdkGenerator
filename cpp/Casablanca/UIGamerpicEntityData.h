// Object: UIGamerpicEntityData
// ClassId: 3710
// RuntimeId: 7002
// TypeInfo: 0x0000000144C80D90
#include "../Entity/EntityData.h"
#include "../Global/Uint64.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Casablanca/GamerpicSize.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UIGamerpicEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Uint64 PlayerId; // 0x28
        Casablanca::GamerpicSize Size; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIGamerpicEntityData) == 0x38);
}
#pragma pack(pop)