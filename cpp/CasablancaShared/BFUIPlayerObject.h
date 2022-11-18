// Object: BFUIPlayerObject
// ClassId: 1237
// RuntimeId: 40235
// TypeInfo: 0x0000000144D800A0
#include "../Core/DataContainer.h"
#include "../Global/Uint64.h"
#include "../CasablancaShared/BFUIConnectingPlayerInfoObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerObject : public Core::DataContainer {
        Uint64 UniqueId; // 0x18
        CasablancaShared::BFUIConnectingPlayerInfoObject ConnectingPlayerInfo; // 0x20
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerObject) == 0x30);
}
#pragma pack(pop)