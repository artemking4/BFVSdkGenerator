// Object: PrivateGamesMetaDataEntityData
// ClassId: 3042
// RuntimeId: 40129
// TypeInfo: 0x0000000144D65770
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMetaDataEntityData : public Entity::EntityData {
        CString GameMode; // 0x20
        CString LevelName; // 0x28
    }; // 0x30
    static_assert(sizeof(PrivateGamesMetaDataEntityData) == 0x30);
}
#pragma pack(pop)