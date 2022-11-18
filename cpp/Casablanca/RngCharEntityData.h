// Object: RngCharEntityData
// ClassId: 3132
// RuntimeId: 64546
// TypeInfo: 0x0000000144C316F0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class RngCharEntityData : public Entity::EntityData {
        CString In; // 0x20
    }; // 0x28
    static_assert(sizeof(RngCharEntityData) == 0x28);
}
#pragma pack(pop)