#pragma once

#include "../../../databags/databag.h"

class OS;
class Engine;
class MessageQueue;

class OsDatabag : public godex::Databag {
	DATABAG(OsDatabag)

	static void _bind_methods();

private:
	OS *os_singleton;

public:
	OsDatabag();

	OS *get_os();
	const OS *get_os() const;
};

class EngineDatabag : public godex::Databag {
	DATABAG(EngineDatabag)

	static void _bind_methods();

	Engine *engine_singleton;

public:
	EngineDatabag();

	Engine *get_engine();
	const Engine *get_engine() const;
};

class MessageQueueDatabag : public godex::Databag {
	DATABAG(MessageQueueDatabag)

	static void _bind_methods();

	CallQueue *message_queue;

public:
	MessageQueueDatabag();

	CallQueue *get_queue();
	const CallQueue *get_queue() const;
};
