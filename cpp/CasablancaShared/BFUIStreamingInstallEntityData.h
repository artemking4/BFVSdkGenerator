// Object: BFUIStreamingInstallEntityData
// ClassId: 2408
// RuntimeId: 13406
// TypeInfo: 0x0000000144D1F970
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UILevelToInstallGroup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIStreamingInstallEntityData : public Entity::EntityData {
        CString LevelName; // 0x20
        Array<CasablancaShared::UILevelToInstallGroup> LevelToInstallGroup; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIStreamingInstallEntityData) == 0x30);
}
#pragma pack(pop)