// Object: ClientPrivateGamesManageGameEntityData
// ClassId: 2501
// RuntimeId: 13687
// TypeInfo: 0x0000000144D659F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"
#include "../CasablancaShared/PingSiteList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPrivateGamesManageGameEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesPlayground Playground; // 0x20
        CasablancaShared::PingSiteList PingSites; // 0x28
    }; // 0x30
    static_assert(sizeof(ClientPrivateGamesManageGameEntityData) == 0x30);
}
#pragma pack(pop)