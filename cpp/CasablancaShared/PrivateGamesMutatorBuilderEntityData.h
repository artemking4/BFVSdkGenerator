// Object: PrivateGamesMutatorBuilderEntityData
// ClassId: 3044
// RuntimeId: 15920
// TypeInfo: 0x0000000144D65670
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMutatorBuilderEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x20
        CasablancaShared::PrivateGamesPlayground Playground; // 0x28
        Int32 SelectedCategoryIndex; // 0x30
        Int32 SelectedMutatorIndex; // 0x34
        Int32 IntVal; // 0x38
        char pad_0x3C[0x4];
        CString StringVal; // 0x40
        Float32 FloatVal; // 0x48
        Boolean BoolVal; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(PrivateGamesMutatorBuilderEntityData) == 0x50);
}
#pragma pack(pop)