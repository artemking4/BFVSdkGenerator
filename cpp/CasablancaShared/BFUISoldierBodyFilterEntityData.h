// Object: BFUISoldierBodyFilterEntityData
// ClassId: 2202
// RuntimeId: 36171
// TypeInfo: 0x0000000144D817A0
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIBodyInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierBodyFilterEntityData : public CasablancaShared::BFUIFilterEntityBaseData {
        Int32 IncludeCharacterType; // 0x28
        Int32 ExcludeCharacterType; // 0x2C
        CasablancaShared::BFUIBodyInstanceObjectList In; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISoldierBodyFilterEntityData) == 0x38);
}
#pragma pack(pop)