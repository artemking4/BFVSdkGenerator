// Object: BFUIIconStateEntityData
// ClassId: 2283
// RuntimeId: 21006
// TypeInfo: 0x0000000144D40DD0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIIconStateEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIIconStateEntityData) == 0x30);
}
#pragma pack(pop)