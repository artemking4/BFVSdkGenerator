// Object: SpartaStringToEventEntityData
// ClassId: 3245
// RuntimeId: 46670
// TypeInfo: 0x0000000144F509C0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaStringToEventEntityData : public Entity::EntityData {
        CString EventType; // 0x20
        Array<CString> OutEvents; // 0x28
    }; // 0x30
    static_assert(sizeof(SpartaStringToEventEntityData) == 0x30);
}
#pragma pack(pop)