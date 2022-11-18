// Object: BFUIConnectingPlayerInfoObject
// ClassId: 1204
// RuntimeId: 9801
// TypeInfo: 0x0000000144D872A0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIConnectingPlayerInfoObject : public Core::DataContainer {
        Uint64 BlazeId; // 0x18
        CString Name; // 0x20
        Boolean IsInLocalSquad; // 0x28
        Boolean IsSquadLeader; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIConnectingPlayerInfoObject) == 0x30);
}
#pragma pack(pop)