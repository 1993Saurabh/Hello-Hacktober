DECLARE 
v_text VARCHAR2(20) := 'Hello World!';
BEGIN
    dbms_output.enable();
    dbms_output.put_line (v_text); 
EXCEPTION WHEN OTHERS THEN
    dbms_output.put_line ('Error'); 
END;