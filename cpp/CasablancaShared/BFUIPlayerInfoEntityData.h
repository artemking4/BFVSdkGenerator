// Object: BFUIPlayerInfoEntityData
// ClassId: 2337
// RuntimeId: 22299
// TypeInfo: 0x0000000144D86E20
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean UpdateAutomatically; // 0x28
        Boolean UpdateAsync; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerInfoEntityData) == 0x30);
}
#pragma pack(pop)