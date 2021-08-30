#include "ConsoleWidgets.h"
#include <map>
#include <vector>
#include <functional>

namespace ConsoleWidgets {

    class Event : ConsoleWidgetsObject {
    private:
        bool isCancelled;
    }

    class EventHandler : ConsoleWidgetsObject {
    private:
        std::function<void(Event&)> handler;
    public:
        std::function GetHandler();
        void SetHandler(std::function);
    }

    class EventGroup : ConsoleWidgetsObject {
    private:
        std::string eventName;
        std::vector<EventHandler> handlers;
    }

    class EventEmitter : ConsoleWidgetsObject {
    private:
        std::map<std::string, EventGroup> groups;
    }
};