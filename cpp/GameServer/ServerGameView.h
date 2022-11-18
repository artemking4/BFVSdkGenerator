// Object: ServerGameView
// ClassId: 8569
// RuntimeId: 5767
// TypeInfo: 0x0000000144E656E0
#include "../GameCommon/GameView.h"

namespace GameServer {
    class ServerGameView : public GameCommon::GameView {
        char pad_0x10[0xB0];
    }; // 0xC0
    static_assert(sizeof(ServerGameView) == 0xC0);
}