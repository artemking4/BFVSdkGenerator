// Object: SimpleAnimationControlComponentData
// ClassId: 1834
// RuntimeId: 43298
// TypeInfo: 0x0000000144C7E780
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/SimpleAnimationControlBinding.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SimpleAnimationControlComponentData : public Entity::GameComponentData {
        CasablancaShared::SimpleAnimationControlBinding Binding; // 0x80
        Int32 AnimationEntitySpacePriority; // 0x94
        Boolean Run; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(SimpleAnimationControlComponentData) == 0xA0);
}
#pragma pack(pop)