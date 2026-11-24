"""Task 4 starter: finish the ZMQ_STREAM TCP server."""

import zmq

PORT = 5555

context = zmq.Context()
server = context.socket(zmq.STREAM)

# TODO: bind on all local interfaces, port 5555.
# server.bind(...)

print(f"Listening on 0.0.0.0:{PORT}")

# TCP has no message boundaries. You need one byte buffer per routing_id.
buffers: dict[bytes, bytearray] = {}

while True:
    # TODO: receive routing_id and payload using recv_multipart().
    # routing_id, payload = ...
    raise NotImplementedError("TODO: receive and buffer TCP data until newline")

    # Hints:
    # 1. Ignore/handle empty payloads: ZMQ_STREAM uses them for connect/disconnect events.
    # 2. Append payload to buffers[routing_id].
    # 3. While b"\\n" exists in the buffer, extract one complete line.
    # 4. Decode it as UTF-8 and print it.
