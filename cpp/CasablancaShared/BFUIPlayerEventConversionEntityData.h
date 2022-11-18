// Object: BFUIPlayerEventConversionEntityData
// ClassId: 2334
// RuntimeId: 20834
// TypeInfo: 0x0000000144D86BA0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerEventConversionEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean TriggerOnPropertyChange; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerEventConversionEntityData) == 0x30);
}
#pragma pack(pop)