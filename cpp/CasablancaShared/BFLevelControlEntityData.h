// Object: BFLevelControlEntityData
// ClassId: 2828
// RuntimeId: 51560
// TypeInfo: 0x0000000144D4B9F0
#include "../GameShared/LevelControlEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFLevelControlEntityData : public GameShared::LevelControlEntityData {
        CString SaveName; // 0x40
    }; // 0x48
    static_assert(sizeof(BFLevelControlEntityData) == 0x48);
}
#pragma pack(pop)