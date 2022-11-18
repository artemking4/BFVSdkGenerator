// Object: DiceOnlineSettings
// ClassId: 4979
// RuntimeId: 10441
// TypeInfo: 0x0000000144DC44B0
#include "../Core/SystemSettings.h"
#include "../DiceOnlineShared/DiceOnlineLogLevelT.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceOnlineShared {
    class DiceOnlineSettings : public Core::SystemSettings {
        DiceOnlineShared::DiceOnlineLogLevelT LogLevel; // 0x20
        Boolean EnableProtobufPayloadLogging; // 0x24
        Boolean AsyncGatewayRpcResponseProcessing; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(DiceOnlineSettings) == 0x28);
}
#pragma pack(pop)