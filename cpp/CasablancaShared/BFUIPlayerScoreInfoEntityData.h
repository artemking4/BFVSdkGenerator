// Object: BFUIPlayerScoreInfoEntityData
// ClassId: 2340
// RuntimeId: 30872
// TypeInfo: 0x0000000144D86DA0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerScoreInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean UpdateOnStart; // 0x28
        Boolean UpdateAutomatically; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerScoreInfoEntityData) == 0x30);
}
#pragma pack(pop)