// Object: ClientPrivateGamesPlaygroundEditorEntityData
// ClassId: 2504
// RuntimeId: 9771
// TypeInfo: 0x0000000144D65B70
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PrivateGamesPlaygrounds.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/MapRotation.h"
#include "../CasablancaShared/PrivateGamesMutators.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPrivateGamesPlaygroundEditorEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x20
        CString BlueprintType; // 0x28
        CString PlaygroundId; // 0x30
        CasablancaShared::PrivateGamesPlaygrounds Playgrounds; // 0x38
        CString PlaygroundName; // 0x40
        CString PlaygroundDescription; // 0x48
        CString PlaygroundPassword; // 0x50
        Int32 MaxPlayersCount; // 0x58
        Int32 MinPlayersCount; // 0x5C
        Int32 AllowedSpectatorsCount; // 0x60
        char pad_0x64[0x4];
        CasablancaShared::MapRotation PlaygroundMapRotation; // 0x68
        CasablancaShared::PrivateGamesMutators PlaygroundMutators; // 0x70
        CString ServerName; // 0x78
        CString ServerDescription; // 0x80
    }; // 0x88
    static_assert(sizeof(ClientPrivateGamesPlaygroundEditorEntityData) == 0x88);
}
#pragma pack(pop)