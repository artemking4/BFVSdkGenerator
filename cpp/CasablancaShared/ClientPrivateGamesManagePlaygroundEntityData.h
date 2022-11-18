// Object: ClientPrivateGamesManagePlaygroundEntityData
// ClassId: 2502
// RuntimeId: 48509
// TypeInfo: 0x0000000144D65970
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPrivateGamesManagePlaygroundEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesPlayground Playground; // 0x20
        Int32 SelectedMaxPlayersCount; // 0x28
        Int32 SelectedPreRoundSize; // 0x2C
        CasablancaShared::PrivateGamesPlayground PlaygroundToCopy; // 0x30
        CString BlueprintType; // 0x38
        Int32 MinSize; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(ClientPrivateGamesManagePlaygroundEntityData) == 0x48);
}
#pragma pack(pop)