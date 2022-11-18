// Object: QuickscopeControlEntityData
// ClassId: 3084
// RuntimeId: 42900
// TypeInfo: 0x0000000144F14C00
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace QuickscopeShared {
    class QuickscopeControlEntityData : public Entity::EntityData {
        CString SeparationCategory; // 0x20
        CString SeparationValue; // 0x28
    }; // 0x30
    static_assert(sizeof(QuickscopeControlEntityData) == 0x30);
}
#pragma pack(pop)