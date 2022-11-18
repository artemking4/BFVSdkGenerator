// Object: ClientPrivateGamesGameSizeProviderEntityData
// ClassId: 2500
// RuntimeId: 22329
// TypeInfo: 0x0000000144D658F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../CasablancaShared/MapRotation.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPrivateGamesGameSizeProviderEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x20
        CasablancaShared::MapRotation PlaygroundMapRotation; // 0x28
        Int32 MaxPlayerCountIndex; // 0x30
        Int32 AllowedSpectatorCountIndex; // 0x34
        Boolean UpdateAutomatically; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(ClientPrivateGamesGameSizeProviderEntityData) == 0x40);
}
#pragma pack(pop)